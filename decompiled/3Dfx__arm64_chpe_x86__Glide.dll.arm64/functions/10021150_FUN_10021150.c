/*
 * FUN_10021150 at 10021150
 * undefined FUN_10021150(void)
 * Address ranges: 10021150-100212b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021150(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int extraout_w14;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  if ((*(char *)(param_1 + 0x3151) != '\0') || ((param_2 & 1) != 0)) {
    iVar7 = FUN_1002c2c0(param_1,*(undefined4 *)(param_1 + 0x2964));
    if (iVar7 != -1) {
      iVar7 = extraout_w14 + iVar7 * 0x120;
      if (*(char *)(param_1 + 0x3235) == '\0') {
        local_20 = 0;
        local_18 = *(uint *)(iVar7 + 0x35a8);
        local_14 = *(uint *)(iVar7 + 0x35ac);
      }
      else {
        iVar8 = *(int *)(extraout_w14 + 0x2990);
        iVar3 = *(int *)(extraout_w14 + 0x2988);
        if (*(int *)(extraout_w14 + 0x2bd8) == 1) {
          uVar1 = *(uint *)(iVar7 + 0x35a4);
          iVar3 = uVar1 - iVar8;
          iVar8 = uVar1 - *(int *)(extraout_w14 + 0x2988);
        }
        uVar1 = *(uint *)(iVar7 + 0x35a0);
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x1002121c);
          (*(code *)uVar6)();
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = (uint)(*(int *)(iVar7 + 0x35a8) * *(int *)(extraout_w14 + 0x2984)) / uVar1;
        }
        local_20 = CONCAT44(local_20._4_4_,uVar4);
        uVar2 = *(uint *)(iVar7 + 0x35a4);
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x10021240);
          (*(code *)uVar6)();
        }
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = (uint)(*(int *)(iVar7 + 0x35ac) * iVar3) / uVar2;
        }
        local_20 = CONCAT44(uVar5,uVar4);
        local_18 = 0;
        if (uVar1 != 0) {
          local_18 = (uint)(*(int *)(iVar7 + 0x35a8) * *(int *)(extraout_w14 + 0x298c)) / uVar1;
        }
        local_14 = 0;
        if (uVar2 != 0) {
          local_14 = (uint)(*(int *)(iVar7 + 0x35ac) * iVar8) / uVar2;
        }
      }
      FUN_10061e30(*(undefined4 *)(*(int *)(extraout_w14 + 0x3188) + 0x1304),1,&local_20);
    }
    *(undefined1 *)(param_1 + 0x3151) = 0;
  }
  return;
}

