/*
 * FUN_140001b14 at 140001b14
 * undefined8 * __fastcall FUN_140001b14(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140001b14-140001c12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140001b14(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  switch(param_3) {
  case 0xffffffed:
    *(undefined4 *)param_2 = 0xfffffffe;
    goto LAB_140001b93;
  case 0xffffffee:
    *(undefined4 *)param_2 = 0xffffffff;
    goto LAB_140001b93;
  case 0xffffffef:
    uVar2 = 0xfffffff8;
    goto LAB_140001b6b;
  case 0xfffffff0:
    *(undefined4 *)param_2 = 0xfffffff9;
    *(undefined4 *)((longlong)param_2 + 4) = 4;
    break;
  case 0xfffffff1:
    *(undefined4 *)param_2 = 0xfffffff9;
    *(undefined4 *)((longlong)param_2 + 4) = 3;
    break;
  case 0xfffffff2:
    *(undefined4 *)param_2 = 0xfffffff9;
LAB_140001b93:
    *(undefined4 *)((longlong)param_2 + 4) = 2;
    break;
  case 0xfffffff3:
    uVar2 = 0xfffffffa;
    goto LAB_140001b6b;
  case 0xfffffff4:
    uVar2 = 0xfffffffb;
    goto LAB_140001b6b;
  case 0xfffffff5:
    uVar2 = 0xfffffffc;
    goto LAB_140001b6b;
  case 0xfffffff6:
    uVar2 = 0xfffffffd;
LAB_140001b6b:
    *(undefined4 *)param_2 = uVar2;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    break;
  case 0xfffffff7:
    *(undefined4 *)param_2 = 0xfffffffe;
    *(undefined4 *)((longlong)param_2 + 4) = 0xfffffffe;
    break;
  case 0xfffffff8:
    *param_2 = 0xffffffffffffffff;
    break;
  default:
    if (param_3 != 0xffffffff) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      uVar3 = (ulonglong)param_3;
      *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + uVar3 * 0x14);
      *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(lVar1 + 4 + uVar3 * 0x14);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x10 + uVar3 * 0x14);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 8 + uVar3 * 0x14);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0xc + uVar3 * 0x14);
    }
  }
  return param_2;
}

