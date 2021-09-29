using UnityEngine;
using System.Runtime.InteropServices;

public class IDFA : MonoBehaviour
{

#if UNITY_IOS//iOSの場合だけ処理

    //RequestIDFA.mmで定義しているObjective-C(iOSで使用されている言語)の関数を以下のようにC#側で定義する
    [DllImport("__Internal")]//iOSのプラグイン読み込み 参考　https://docs.unity3d.com/ja/2018.4/Manual/NativePlugins.html
    private static extern void _requestIDFA();//外部で実装されるメソッドを宣言 参考　https://docs.microsoft.com/ja-jp/dotnet/csharp/language-reference/keywords/extern

#endif//iOSの処理範囲終わり


    private void Start()
    {
#if UNITY_IOS//iOSの場合だけ処理

        _requestIDFA();//IDFAリクエストの実行

#endif//iOSの処理範囲終わり
    }

}
