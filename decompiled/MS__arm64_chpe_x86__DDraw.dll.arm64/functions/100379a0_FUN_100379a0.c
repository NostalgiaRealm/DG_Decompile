/*
 * FUN_100379a0 at 100379a0
 * undefined FUN_100379a0(void)
 * Address ranges: 100379a0-10037bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100379a0(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *local_50 [4];
  
  *param_1 = &PTR_FUN_100b2580;
  param_1[4] = &PTR_FUN_100b2418;
  param_1[0xe] = &PTR_FUN_100b23f4;
  local_50[0] = param_1;
  piVar4 = (int *)FUN_10055228(param_1,local_50);
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      uVar5 = FUN_10054b60(*piVar4);
      FUN_10091460(uVar5,0x14);
    }
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = DAT_100c2658;
    if (DAT_100c2658 != 0) {
      do {
        uVar7 = uVar6 + uVar8 >> 1;
        uVar9 = *(ulonglong *)(DAT_100c2650._4_4_ + uVar7 * 0x10);
        uVar3 = uVar7;
        if (uVar9 <= (ulonglong)(longlong)(int)param_1) {
          if ((ulonglong)(longlong)(int)param_1 <= uVar9) break;
          uVar8 = uVar7 + 1;
          uVar7 = uVar8;
          uVar3 = uVar6;
        }
        uVar6 = uVar3;
      } while (uVar6 != uVar8);
    }
    if ((uVar7 != DAT_100c2658) &&
       (*(longlong *)(DAT_100c2650._4_4_ + uVar7 * 0x10) == (longlong)(int)param_1)) {
      uVar7 = uVar7 + 1;
      if (uVar7 < DAT_100c2658) {
        while( true ) {
          puVar1 = (undefined8 *)(DAT_100c2650._4_4_ + uVar7 * 0x10);
          uVar7 = uVar7 + 1;
          puVar1[-1] = puVar1[1];
          puVar1[-2] = *puVar1;
          if (DAT_100c2658 <= uVar7) break;
        }
      }
      _DAT_100c2658 = CONCAT44(_DAT_100c265c,DAT_100c2658 - 1);
    }
  }
  iVar2 = DAT_100c2950;
  uVar8 = 0;
  uVar7 = DAT_100c2940;
  if (DAT_100c2940 != 0) {
    do {
      piVar4 = (int *)(iVar2 + uVar8 * 4);
      if ((undefined4 *)*piVar4 == param_1) {
        uVar7 = uVar7 - 1;
        if (uVar7 - uVar8 != 0) {
          FUN_100917a0(piVar4,piVar4 + 1,((ulonglong)(uVar7 - uVar8) & 0x3fffffff) << 2);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  DAT_100c2940 = uVar7;
  if (DAT_100c2940 == 0) {
    FUN_100914d0(DAT_100c2650 & 0xffffffff);
    DAT_100c2650 = 0;
    _DAT_100c2658 = 0;
    FUN_100914d0(DAT_100c2950);
    DAT_100c2950 = 0;
    FUN_10040a98();
    FUN_10002070();
  }
  FUN_100914d0(param_1[0x50]);
  FUN_100914d0(param_1[0x4d]);
  FUN_100914d0(param_1[0x4a]);
  FUN_100914d0(param_1[0x43]);
  FUN_10004550(param_1 + 4);
  *param_1 = &PTR_FUN_100b25dc;
  if (param_1[0xf] != 0) {
    FUN_10091460(param_1[0xf],8);
  }
  return;
}

