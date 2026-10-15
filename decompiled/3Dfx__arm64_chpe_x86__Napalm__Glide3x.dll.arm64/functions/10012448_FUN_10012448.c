/*
 * FUN_10012448 at 10012448
 * undefined FUN_10012448(void)
 * Address ranges: 10012448-100125b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012448(int param_1,ulonglong param_2)

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
  
  if ((*(char *)(param_1 + 0x3651) != '\0') || ((param_2 & 1) != 0)) {
    iVar7 = FUN_1001cae0(param_1 + 0x3940,*(undefined4 *)(param_1 + 0x2b1c));
    if (iVar7 != -1) {
      iVar7 = param_1 + iVar7 * 0x120;
      if (*(char *)(param_1 + 0x3735) == '\0') {
        local_20 = 0;
        local_18 = *(uint *)(iVar7 + 0x3aa8);
        local_14 = *(uint *)(iVar7 + 0x3aac);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x2b48);
        iVar3 = *(int *)(param_1 + 0x2b40);
        if (*(int *)(param_1 + 0x2dc8) == 1) {
          uVar1 = *(uint *)(iVar7 + 0x3aa4);
          iVar3 = uVar1 - iVar8;
          iVar8 = uVar1 - *(int *)(param_1 + 0x2b40);
        }
        uVar1 = *(uint *)(iVar7 + 0x3aa0);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x1001251c);
          (*(code *)uVar6)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (uint)(*(int *)(iVar7 + 0x3aa8) * *(int *)(param_1 + 0x2b3c)) / uVar1;
        }
        local_20 = CONCAT44(local_20._4_4_,uVar4);
        uVar2 = *(uint *)(iVar7 + 0x3aa4);
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x10012540);
          (*(code *)uVar6)();
        }
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = (uint)(*(int *)(iVar7 + 0x3aac) * iVar3) / uVar2;
        }
        local_20 = CONCAT44(uVar5,uVar4);
        local_18 = 0;
        if (uVar1 != 0) {
          local_18 = (uint)(*(int *)(iVar7 + 0x3aa8) * *(int *)(param_1 + 0x2b44)) / uVar1;
        }
        local_14 = 0;
        if (uVar2 != 0) {
          local_14 = (uint)(*(int *)(iVar7 + 0x3aac) * iVar8) / uVar2;
        }
      }
      FUN_1006ace0(*(undefined4 *)(*(int *)(param_1 + 0x3688) + 0x1304),1,&local_20);
    }
    *(undefined1 *)(param_1 + 0x3651) = 0;
  }
  return;
}

