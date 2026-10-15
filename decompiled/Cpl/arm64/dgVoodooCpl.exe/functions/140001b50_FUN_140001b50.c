/*
 * FUN_140001b50 at 140001b50
 * undefined8 * __cdecl FUN_140001b50(longlong param_1, undefined8 * param_2, uint param_3)
 * Address ranges: 140001b50-140001c23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140001b50(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  switch(param_3) {
  case 0xffffffed:
    uVar2 = 0xfffffffe;
    goto LAB_140001bb0;
  case 0xffffffee:
    uVar2 = 0xffffffff;
    goto LAB_140001bb0;
  case 0xffffffef:
    uVar2 = 0xfffffff8;
    break;
  case 0xfffffff0:
    uVar2 = 0xfffffff9;
    uVar3 = 4;
    goto LAB_140001bb4;
  case 0xfffffff1:
    uVar2 = 0xfffffff9;
    uVar3 = 3;
    goto LAB_140001bb4;
  case 0xfffffff2:
    uVar2 = 0xfffffff9;
LAB_140001bb0:
    uVar3 = 2;
LAB_140001bb4:
    *(undefined4 *)param_2 = uVar2;
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    return param_2;
  case 0xfffffff3:
    uVar2 = 0xfffffffa;
    break;
  case 0xfffffff4:
    uVar2 = 0xfffffffb;
    break;
  case 0xfffffff5:
    uVar2 = 0xfffffffc;
    break;
  case 0xfffffff6:
    uVar2 = 0xfffffffd;
    break;
  case 0xfffffff7:
    uVar2 = 0xfffffffe;
    break;
  case 0xfffffff8:
    uVar2 = 0xffffffff;
    break;
  default:
    if (param_3 == 0xffffffff) {
      return param_2;
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 0x14);
    uVar2 = puVar1[1];
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 2) = puVar1[4];
    uVar2 = puVar1[3];
    *(undefined4 *)(param_2 + 1) = puVar1[2];
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    return param_2;
  }
  *(undefined4 *)param_2 = uVar2;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  return param_2;
}

