/*
 * FUN_100339e8 at 100339e8
 * undefined FUN_100339e8(void)
 * Address ranges: 100339e8-10033c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100339e8(int param_1,char param_2,byte param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *extraout_w9;
  int iVar9;
  int iVar10;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  piVar1 = (int *)(param_1 + 0x138);
  iVar6 = FUN_1001c518(param_1,*(undefined4 *)(*piVar1 + 0x29e0));
  iVar7 = FUN_1001c518(param_1,*(undefined4 *)(*piVar1 + 0x29e4));
  iVar9 = 0;
  iVar10 = 0;
  do {
    if ((param_2 != '\0' || iVar9 == iVar6) || iVar9 == iVar7) {
      iVar5 = iVar10 + param_1;
      pbVar2 = (byte *)(iVar5 + 0x1be);
      if ((*pbVar2 & 1) != 0) {
        iVar3 = iVar5 + 0x13c;
        puVar4 = (undefined4 *)(iVar5 + 0x160);
        uVar8 = FUN_10023de8(iVar3);
        if ((uVar8 & 1) == 0) {
          uStack_44 = *puVar4;
          local_50 = 0;
          local_48 = *extraout_w9;
          (*(code *)PTR_FUN_100a020c)(iVar5 + 0x170,iVar5 + 0x170,&local_50);
          FUN_10032658(param_1,iVar3,1,0);
          FUN_10023d50(iVar3,*puVar4);
          *pbVar2 = *pbVar2 & 0xfe;
        }
        else {
          FUN_10014978(*piVar1);
          FUN_1001c2c0(param_1,iVar9,1,0,0,*(undefined4 *)(iVar5 + 0x15c),*puVar4,0);
          FUN_10032658(param_1,iVar3,1,0);
          FUN_1001c058(param_1,iVar9,*(undefined4 *)(iVar5 + 0x198),*(undefined4 *)(iVar5 + 0x19c),
                       *(undefined1 *)(iVar5 + 0x1b9),*(undefined1 *)(iVar5 + 0x1bd),0,0,
                       *(undefined1 *)(iVar5 + 0x1bb));
          FUN_10023d50(iVar3,*puVar4);
          (*(code *)PTR_FUN_100a0090)(*(int *)(*piVar1 + 0x3300) + 0x4a0);
        }
      }
      *pbVar2 = *pbVar2 | param_3;
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 0x104;
  } while (iVar9 < 7);
  return;
}

