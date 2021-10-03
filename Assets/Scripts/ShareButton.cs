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
        // 削除が完了するまで待機
        while (true) {
            if (!File.Exists(imagePath)) break;
            yield return null;
        }


        ScreenCapture.CaptureScreenshot("image.png");
        // 撮影画像の書き込みが完了するまで待機
        while (true) {
            if (File.Exists(imagePath)) break;
            yield return null;
        }
        // 撮影画像の保存処理のため、１フレーム待機
        yield return new WaitForEndOfFrame();

        string text = "暇つぶしスマホアプリ「ハーゲンタップ」で遊んでるよ！！";

        SocialConnector.SocialConnector.Share(text, "https://apple.co/3kWEWuQ", imagePath);
    }
}