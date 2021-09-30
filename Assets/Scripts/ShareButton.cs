using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShareButton : MonoBehaviour {

    string imagePath {
        get {
            return Application.persistentDataPath + "/image.png";
        }
    }


    public void Click() {

        ScreenCapture.CaptureScreenshot("image.png");

        SocialConnector.SocialConnector.Share("�ɂԂ��X�}�z�A�v���u�n�[�Q���^�b�v�v�ŗV��ł��I�I", "https://apple.co/3kWEWuQ", imagePath);
    }
}

