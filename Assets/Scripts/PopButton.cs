using UnityEngine.UI;
using DG.Tweening;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace nkjzm
{
    
    /// <summary>
    /// ポップに押されるボタン
    /// </summary>
    public class PopButton : Button
    {
        Vector3 defaultScale;
        
        Tweener tweener = null;
        new void Start()
        {
            defaultScale = transform.localScale;
            base.Start();

            // ボタンアニメーション
            onClick.AddListener(() =>
            {
                // 再生中のアニメーションを停止/初期化
                if (tweener != null)
                {
                    tweener.Kill();
                    tweener = null;
                    transform.localScale = defaultScale;
                }
                tweener = transform.DOPunchScale(
                    punch: Vector3.one * 0.1f,
                    duration: 0.2f,
                    vibrato: 1
                ).SetEase(Ease.OutExpo);
            });
        }
    }
}
