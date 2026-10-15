/*
 * FUN_10043e88 at 10043e88
 * undefined FUN_10043e88(void)
 * Address ranges: 10043e88-100440cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043e88(int param_1,char param_2,byte param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  int extraout_w10;
  int iVar9;
  int iVar10;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  piVar1 = (int *)(param_1 + 0x138);
  uVar8 = FUN_1002be40(param_1,*(undefined4 *)(*piVar1 + 0x2964));
  iVar7 = FUN_1002be40(uVar8,*(undefined4 *)(extraout_w10 + 0x2968));
  iVar9 = 0;
  iVar10 = 0;
  do {
    if ((param_2 != '\0' || iVar9 == (int)uVar8) || iVar9 == iVar7) {
      iVar5 = iVar10 + param_1;
      pbVar2 = (byte *)(iVar5 + 0x1be);
      if ((*pbVar2 & 1) != 0) {
        iVar3 = iVar5 + 0x13c;
        if ((*(int *)(iVar5 + 0x1a0) == 0) && (*(int *)(iVar5 + 0x1a4) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        puVar4 = (undefined4 *)(iVar5 + 0x160);
        if (bVar6) {
          FUN_100254d8(*piVar1);
          FUN_1002bbe8(param_1,iVar9,1,0,0,*(undefined4 *)(iVar5 + 0x15c),*puVar4,0);
          FUN_10042af8(param_1,iVar3,1,0);
          FUN_1002b980(param_1,iVar9,*(undefined4 *)(iVar5 + 0x198),*(undefined4 *)(iVar5 + 0x19c),
                       *(undefined1 *)(iVar5 + 0x1b9),*(undefined1 *)(iVar5 + 0x1bd),0,0,
                       *(undefined1 *)(iVar5 + 0x1bb));
          FUN_10034c30(iVar3,*puVar4);
          (*(code *)PTR_FUN_1009d090)(*(int *)(*piVar1 + 0x3180) + 0x4a0);
        }
        else {
          uStack_4c = *puVar4;
          local_58 = 0;
          local_50 = *(undefined4 *)(iVar5 + 0x15c);
          (*(code *)PTR_FUN_1009d208)(iVar5 + 0x170,iVar5 + 0x170,&local_58);
          FUN_10042af8(param_1,iVar3,1,0);
          FUN_10034c30(iVar3,*puVar4);
          *pbVar2 = *pbVar2 & 0xfe;
        }
      }
      *pbVar2 = *pbVar2 | param_3;
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 0x104;
  } while (iVar9 < 3);
  return;
}

