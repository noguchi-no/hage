using UnityEngine;
using System.Collections;
using GoogleMobileAds.Api;
using System;

public class AdMobInters : MonoBehaviour {
　　public string Android_Interstitial;
　　public string ios_Interstitial;
　　private BannerView bannerView;
　　public static InterstitialAd _interstitial;
    //public static bool adClosed;
    //public static bool adOpened;
    
    
　　// Use this for initialization
　　void Awake () {
    
　　}

　　// Use this for initialization
　　void Start () {
　　　　// 起動時にインタースティシャル広告をロードしておく
　　　　RequestInterstitial ();
　　}

　　public void RequestInterstitial()
　　{
　　　　#if UNITY_ANDROID
　　　　　　string adUnitId = Android_Interstitial;
　　　　#elif UNITY_IPHONE
　　　　　　string adUnitId = ios_Interstitial;
　　　　#else
　　　　　　string adUnitId = "unexpected_platform";
　　　　#endif

　　　　// Initialize an InterstitialAd.
　　　　_interstitial = new InterstitialAd (adUnitId);

      _interstitial.OnAdClosed += HandleAdClosed;
      _interstitial.OnAdOpening += HandleOnAdOpened;
      
　　　　// Create an empty ad request.
　　　　AdRequest request = new AdRequest.Builder ().Build ();

　　　　// Load the interstitial with the request.
　　　　_interstitial.LoadAd (request);
　　}
　　public void HandleAdClosed (object sender, System.EventArgs e)
　　{
        //adClosed = true;
　　　　_interstitial.Destroy ();
　　　　RequestInterstitial ();
    　 
       AudioListener.volume= 1; 
        
　　}
    public void HandleOnAdOpened(object sender, EventArgs args)
    {
        //adOpened = true;
        AudioListener.volume= 0;
    }
}