/*
 * FUN_18001e924 at 18001e924
 * uint * __fastcall FUN_18001e924(longlong param_1, uint * param_2, ulonglong param_3, uint * param_4, longlong param_5)
 * Address ranges: 18001e924-18001e9b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18001e924(longlong param_1,uint *param_2,ulonglong param_3,uint *param_4,longlong param_5
                    )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_5 == 0) {
    param_5 = *(longlong *)(param_1 + 8);
  }
  uVar1 = *(uint *)(param_5 + 0xa2);
  uVar2 = *(uint *)(param_5 + 0xa6);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  if ((uVar1 == 0) || (uVar2 == 0)) {
    uVar4 = *(uint *)(param_1 + 0x20 + (param_3 & 0xffffffff) * 8) / *param_4;
    uVar3 = *(uint *)(param_1 + 0x24 + (param_3 & 0xffffffff) * 8) / param_4[1];
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    if (uVar1 == uVar2) {
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      *param_2 = uVar3;
    }
    else if (uVar1 == 0) {
      *param_2 = uVar4;
      return param_2;
    }
    param_2[1] = uVar3;
  }
  return param_2;
}

