using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InterfaceAdjustment : MonoBehaviour
{
    [SerializeField]
    private Vector2Int Size = new Vector2Int(1080, 1920);

    private enum ADJUSTMENT_RULES
    {
        normal,
        box,
    }

    [SerializeField]
    private ADJUSTMENT_RULES AdjType;

    private void Awake()
    {
        RectTransform _trans = this.transform.gameObject.GetComponent<RectTransform>();
        Vector3 _pos = this.transform.localPosition;

        float _work_w = 1.0f;
        float _work_h = 1.0f;

        if (Size.x != 0 && Size.y != 0)
        {
            _work_w = (float)Screen.width / Size.x;
            _work_h = (float)Screen.height / Size.y;
        }
        else
        {
            Debug.LogError("�X�N���[���T�C�Y�Ɂ@0�@���ݒ肳��Ă��܂�");
        }

        _pos.x *= _work_w;
        _pos.y *= _work_h;

        if (AdjType == ADJUSTMENT_RULES.normal && _trans == null)
        {
            Debug.Log("normal�ݒ���s���I�u�W�F�N�g��RectTransform���K�v�ł�");
            AdjType = ADJUSTMENT_RULES.box;
        }

        if (AdjType == ADJUSTMENT_RULES.normal)
        {
            _trans.sizeDelta = new Vector2(
                    _trans.sizeDelta.x * _work_w,
                    _trans.sizeDelta.y * _work_h);
        }
        else
        {
            float _adj = 0;
            if (_work_w < _work_h)
            {
                _adj = _work_w;
            }
            else
            {
                _adj = _work_h;
            }
            this.transform.localScale *= _adj;
        }

        this.transform.localPosition = _pos;
    }
}

