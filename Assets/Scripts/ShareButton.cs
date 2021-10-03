using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.Collections;
using System.IO;
using System;

public class ShareButton : MonoBehaviour {

    string imagePath {
        get {
            return Application.persistentDataPath + "/image.png";
        }
    }

    public void Click() {
        StartCoroutine(_Share());
    }
    public IEnumerator _Share() {

        File.Delete(imagePath);
        // �폜����������܂őҋ@
        while (true) {
            if (!File.Exists(imagePath)) break;
            yield return null;
        }


        ScreenCapture.CaptureScreenshot("image.png");
        // �B�e�摜�̏������݂���������܂őҋ@
        while (true) {
            if (File.Exists(imagePath)) break;
            yield return null;
        }
        // �B�e�摜�̕ۑ������̂��߁A�P�t���[���ҋ@
        yield return new WaitForEndOfFrame();

        string text = "�ɂԂ��X�}�z�A�v���u�n�[�Q���^�b�v�v�ŗV��ł��I�I";

        SocialConnector.SocialConnector.Share(text, "https://apple.co/3kWEWuQ", imagePath);
    }
}