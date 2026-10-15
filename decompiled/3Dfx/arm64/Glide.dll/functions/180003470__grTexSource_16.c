/*
 * _grTexSource@16 at 180003470
 * undefined __cdecl _grTexSource@16(int param_1, uint param_2, undefined1 param_3, uint * param_4)
 * Address ranges: 180003470-180003593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexSource_16(int param_1,uint param_2,undefined1 param_3,uint *param_4)

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
  
                    /* 0x3470  105  _grTexSource@16
                       0x3470  266  grTexSource */
  lVar7 = FUN_180017788();
  if (*(char *)(lVar7 + 100) != '\0') {
    uVar3 = param_4[2];
    uVar5 = param_4[3];
    uVar4 = *param_4;
    uVar6 = param_4[1];
    uVar8 = FUN_180061700((uint *)(lVar7 + 0x60));
    if ((param_1 < *(int *)(*(longlong *)(lVar7 + 0x30) + 0x833)) &&
       (uVar9 = FUN_180019880(uVar8,uVar4,uVar6,uVar3,uVar5), (uVar9 & 1) != 0)) {
      uVar2 = param_2 & 0xfffffff8;
      if (*(uint *)(extraout_x10 + 0x82f) < (param_2 & 0xfffffff8)) {
        uVar2 = *(uint *)(extraout_x10 + 0x82f);
      }
      lVar1 = (longlong)param_1 * 0x41 + *(longlong *)(lVar7 + 0x18);
      *(uint *)(lVar1 + 0x180) = uVar2;
      *(uint *)(lVar1 + 0x198) = uVar3;
      *(uint *)(lVar1 + 0x19c) = uVar5;
      *(uint *)(lVar1 + 400) = uVar4;
      *(uint *)(lVar1 + 0x194) = uVar6;
      *(undefined1 *)(lVar1 + 0x1a0) = param_3;
      FUN_180019968(lVar7,param_1);
    }
    FUN_1800616f0((uint *)(lVar7 + 0x60));
  }
  return;
}

