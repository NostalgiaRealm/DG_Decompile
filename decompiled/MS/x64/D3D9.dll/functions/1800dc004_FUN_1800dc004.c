/*
 * FUN_1800dc004 at 1800dc004
 * undefined __fastcall FUN_1800dc004(longlong param_1, ulonglong param_2, float * param_3)
 * Address ranges: 1800dc004-1800dc0cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dc004(longlong param_1,ulonglong param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = (param_2 & 0xffffffff) * 0x18c0;
  if ((((*param_3 != *(float *)(lVar4 + 0xb80 + param_1)) ||
       (param_3[1] != *(float *)(lVar4 + 0xb84 + param_1))) ||
      (param_3[2] != *(float *)(lVar4 + 0xb88 + param_1))) ||
     (((param_3[3] != *(float *)(lVar4 + 0xb8c + param_1) ||
       (param_3[4] != *(float *)(lVar4 + 0xb90 + param_1))) ||
      (param_3[5] != *(float *)(lVar4 + 0xb94 + param_1))))) {
    plVar2 = *(longlong **)(lVar4 + 0x6b8 + param_1);
    (**(code **)(*plVar2 + 0x160))(plVar2,1);
    uVar3 = *(undefined8 *)(param_3 + 2);
    puVar1 = (undefined8 *)(lVar4 + 0xb80 + param_1);
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar4 + 0xb90 + param_1) = *(undefined8 *)(param_3 + 4);
  }
  return;
}

