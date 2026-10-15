/*
 * FUN_100104c0 at 100104c0
 * undefined FUN_100104c0(void)
 * Address ranges: 100104c0-1001062f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100104c0(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  if ((*(char *)(param_1 + 0x32d1) != '\0') || ((param_2 & 1) != 0)) {
    iVar7 = FUN_1001c518(param_1 + 0x35c0,*(undefined4 *)(param_1 + 0x29e0));
    if (iVar7 != -1) {
      iVar7 = param_1 + iVar7 * 0x120;
      if (*(char *)(param_1 + 0x33b5) == '\0') {
        local_20 = 0;
        local_18 = *(uint *)(iVar7 + 0x3728);
        local_14 = *(uint *)(iVar7 + 0x372c);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x2a0c);
        iVar3 = *(int *)(param_1 + 0x2a04);
        if (*(int *)(param_1 + 0x2c78) == 1) {
          uVar1 = *(uint *)(iVar7 + 0x3724);
          iVar3 = uVar1 - iVar8;
          iVar8 = uVar1 - *(int *)(param_1 + 0x2a04);
        }
        uVar1 = *(uint *)(iVar7 + 0x3720);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x10010594);
          (*(code *)uVar6)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (uint)(*(int *)(iVar7 + 0x3728) * *(int *)(param_1 + 0x2a00)) / uVar1;
        }
        local_20 = CONCAT44(local_20._4_4_,uVar4);
        uVar2 = *(uint *)(iVar7 + 0x3724);
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x100105b8);
          (*(code *)uVar6)();
        }
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = (uint)(*(int *)(iVar7 + 0x372c) * iVar3) / uVar2;
        }
        local_20 = CONCAT44(uVar5,uVar4);
        local_18 = 0;
        if (uVar1 != 0) {
          local_18 = (uint)(*(int *)(iVar7 + 0x3728) * *(int *)(param_1 + 0x2a08)) / uVar1;
        }
        local_14 = 0;
        if (uVar2 != 0) {
          local_14 = (uint)(*(int *)(iVar7 + 0x372c) * iVar8) / uVar2;
        }
      }
      FUN_10065640(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),1,&local_20);
    }
    *(undefined1 *)(param_1 + 0x32d1) = 0;
  }
  return;
}

