/*
 * FUN_10082c98 at 10082c98
 * undefined FUN_10082c98(void)
 * Address ranges: 10082c98-10082dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082c98(int param_1)

{
  uint **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  uint *local_60 [16];
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(uint *)(param_1 + 0xc);
  ppuVar1 = (uint **)(param_1 + 0x10);
  if (((*(char *)(iVar2 + 100) != '\0') && ((uVar7 >> 0xd & 1) != 0)) &&
     (puVar4 = *(uint **)(param_1 + 0x10), (*puVar4 >> 0x1e & 1) != 0)) {
    local_7c = (undefined1)puVar4[1];
    local_80 = FUN_100ee580(iVar2 + 0x18,4,0);
    local_60[0] = &local_80;
    uStack_68 = 0xffffffffffffffff;
    local_70 = 0xffffffffffffffff;
    iVar8 = 1;
    puVar5 = *(uint **)(param_1 + 0x14);
    piVar6 = (int *)(param_1 + 0x18);
    while (puVar5 != (uint *)0x0) {
      ppuVar1 = local_60 + iVar8;
      iVar8 = iVar8 + 1;
      *ppuVar1 = puVar5;
      puVar5 = (uint *)*piVar6;
      piVar6 = piVar6 + 1;
    }
    local_60[iVar8] = (uint *)0x0;
    FUN_100ef540(iVar2 + 0x18,uVar3,uVar7,local_60);
    local_7c = FUN_100efc98(0xe4,local_7c);
    local_60[1] = &local_80;
    local_60[2] = (uint *)0x0;
    ppuVar1 = local_60;
    uVar7 = 0x36;
    local_60[0] = puVar4;
  }
  FUN_100ef540(iVar2 + 0x18,uVar3,uVar7,ppuVar1);
  return;
}

