/*
 * FUN_1002d7f0 at 1002d7f0
 * undefined FUN_1002d7f0(void)
 * Address ranges: 1002d7f0-1002d893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d7f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_20 [2];
  
  iVar3 = *(int *)(param_1 + 0x315c);
  (*(code *)PTR_FUN_1009d0b0)(local_20);
  FUN_10029f60(iVar3,local_20);
  lVar8 = *(longlong *)(iVar3 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x1002d84c);
    (*(code *)uVar6)();
  }
  uVar4 = 0;
  if (lVar8 != 0) {
    uVar4 = (undefined4)((local_20[0] - *(longlong *)(iVar3 + 0x18)) / lVar8);
  }
  *(undefined4 *)(iVar3 + 0xb8) = uVar4;
  uVar7 = 1;
  do {
    iVar1 = uVar7 * 0x10;
    iVar5 = uVar7 * 4;
    iVar2 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    *(int *)(param_2 + -4 + iVar2) =
         *(int *)(iVar3 + 0xa8 + iVar1) - ((undefined4 *)(iVar3 + 0xb8))[iVar5];
  } while (uVar7 < 7);
  return;
}

