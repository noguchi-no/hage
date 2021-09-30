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

        SocialConnector.SocialConnector.Share("暇つぶしスマホアプリ「ハーゲンタップ」で遊んでるよ！！", "https://apple.co/3kWEWuQ", imagePath);
    }
}

