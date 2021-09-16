using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using GoogleMobileAds.Api;


public class AdMob : MonoBehaviour
{

    private BannerView bannerView;

    // Start is called before the first frame update
    void Start()
    {

        this.RequestBanner();
    }

    private void RequestBanner()
    {

        string adUnitId = "ca-app-pub-5858797465901996/1009734961";

        this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();

        // Load the banner with the request.
        this.bannerView.LoadAd(request);

    }
}
