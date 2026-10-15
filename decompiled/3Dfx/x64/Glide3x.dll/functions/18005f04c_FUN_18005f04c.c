/*
 * FUN_18005f04c at 18005f04c
 * undefined8 __fastcall FUN_18005f04c(longlong * param_1)
 * Address ranges: 18005f04c-18005f0da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005f04c(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  if ((int)param_1[2] != -1) {
    uVar4 = *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 2) * 0x10);
    *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 2) * 0x10) = 0;
    uVar1 = *(uint *)(param_1 + 2);
    lVar3 = *param_1;
    uVar5 = (ulonglong)uVar1;
    uVar2 = *(uint *)(lVar3 + 0xc + uVar5 * 0x10);
    if ((uVar2 != 0xffffffff) && (*(longlong *)(lVar3 + (ulonglong)uVar2 * 0x10) != 0)) {
      *(uint *)(param_1 + 2) = uVar2;
      *(undefined4 *)(lVar3 + 0xc + uVar5 * 0x10) =
           *(undefined4 *)(lVar3 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10);
      *(undefined4 *)(*param_1 + 8 + uVar5 * 0x10) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(uint *)(*param_1 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10) = uVar1;
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0xc + uVar5 * 0x10) != -1) {
        *(uint *)(lVar3 + 8 + (ulonglong)*(uint *)(lVar3 + 0xc + uVar5 * 0x10) * 0x10) = uVar1;
      }
    }
  }
  return uVar4;
}

