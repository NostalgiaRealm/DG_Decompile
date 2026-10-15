/*
 * FUN_180018d78 at 180018d78
 * undefined __cdecl FUN_180018d78(longlong param_1, int param_2, uint param_3, uint param_4, undefined1 param_5, uint * param_6)
 * Address ranges: 180018d78-180018eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018d78(longlong param_1,int param_2,uint param_3,uint param_4,undefined1 param_5,
                  uint *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong extraout_x10;
  
  if (*(char *)(param_1 + 100) != '\0') {
    uVar3 = param_6[2];
    uVar5 = param_6[3];
    uVar4 = *param_6;
    uVar6 = param_6[1];
    uVar7 = FUN_1800608b0((uint *)(param_1 + 0x60));
    if ((param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) &&
       (uVar8 = FUN_180018a30(uVar7,uVar4,uVar6,uVar3,uVar5), (uVar8 & 1) != 0)) {
      uVar2 = param_4 & 0xfffffff8;
      if (*(uint *)(extraout_x10 + 0x82f) < (param_4 & 0xfffffff8)) {
        uVar2 = *(uint *)(extraout_x10 + 0x82f);
      }
      lVar1 = (longlong)param_2 * 0x41 + *(longlong *)(param_1 + 0x18);
      *(uint *)(lVar1 + (ulonglong)param_3 * 4 + 0x180) = uVar2;
      *(uint *)(lVar1 + 0x198) = uVar3;
      *(uint *)(lVar1 + 0x19c) = uVar5;
      *(uint *)(lVar1 + 400) = uVar4;
      *(uint *)(lVar1 + 0x194) = uVar6;
      *(undefined1 *)(lVar1 + 0x1a0) = param_5;
      FUN_180018b18(param_1,param_2);
    }
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

