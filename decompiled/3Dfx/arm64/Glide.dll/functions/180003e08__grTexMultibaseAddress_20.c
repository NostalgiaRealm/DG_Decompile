/*
 * _grTexMultibaseAddress@20 at 180003e08
 * undefined __cdecl _grTexMultibaseAddress@20(int param_1, uint param_2, uint param_3, undefined1 param_4, uint * param_5)
 * Address ranges: 180003e08-180003f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMultibaseAddress_20
               (int param_1,uint param_2,uint param_3,undefined1 param_4,uint *param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong extraout_x10;
  
                    /* 0x3e08  103  _grTexMultibaseAddress@20
                       0x3e08  264  grTexMultibaseAddress */
  lVar7 = FUN_180017788();
  if (*(char *)(lVar7 + 100) != '\0') {
    uVar3 = param_5[2];
    uVar5 = param_5[3];
    uVar4 = *param_5;
    uVar6 = param_5[1];
    uVar8 = FUN_180061700((uint *)(lVar7 + 0x60));
    if ((param_1 < *(int *)(*(longlong *)(lVar7 + 0x30) + 0x833)) &&
       (uVar9 = FUN_180019880(uVar8,uVar4,uVar6,uVar3,uVar5), (uVar9 & 1) != 0)) {
      uVar2 = param_3 & 0xfffffff8;
      if (*(uint *)(extraout_x10 + 0x82f) < (param_3 & 0xfffffff8)) {
        uVar2 = *(uint *)(extraout_x10 + 0x82f);
      }
      lVar1 = (longlong)param_1 * 0x41 + *(longlong *)(lVar7 + 0x18);
      *(uint *)(lVar1 + (ulonglong)param_2 * 4 + 0x180) = uVar2;
      *(uint *)(lVar1 + 0x198) = uVar3;
      *(uint *)(lVar1 + 0x19c) = uVar5;
      *(uint *)(lVar1 + 400) = uVar4;
      *(uint *)(lVar1 + 0x194) = uVar6;
      *(undefined1 *)(lVar1 + 0x1a0) = param_4;
      FUN_180019968(lVar7,param_1);
    }
    FUN_1800616f0((uint *)(lVar7 + 0x60));
  }
  return;
}

