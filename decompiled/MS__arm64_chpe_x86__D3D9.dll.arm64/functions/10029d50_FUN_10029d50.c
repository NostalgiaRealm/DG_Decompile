/*
 * FUN_10029d50 at 10029d50
 * undefined FUN_10029d50(void)
 * Address ranges: 10029d50-10029e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029d50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [64];
  
  if (*(char *)(param_1 + 0xc9b) == '\0') {
    piVar1 = (int *)(param_1 + 0xd80);
    if (*(char *)(param_1 + 0xc9a) == '\0') {
      if (*(char *)(param_1 + 0xc98) == '\0') {
        puVar3 = (undefined8 *)FUN_100391e0(*piVar1 + 0x280,auStack_80,*piVar1);
        iVar2 = *piVar1;
        uVar6 = *puVar3;
        uVar5 = puVar3[3];
        uVar4 = puVar3[2];
        *(undefined8 *)(iVar2 + 0x8548) = puVar3[1];
        *(undefined8 *)(iVar2 + 0x8540) = uVar6;
        *(undefined8 *)(iVar2 + 0x8558) = uVar5;
        *(undefined8 *)(iVar2 + 0x8550) = uVar4;
        uVar6 = puVar3[4];
        uVar5 = puVar3[7];
        uVar4 = puVar3[6];
        *(undefined8 *)(iVar2 + 0x8568) = puVar3[5];
        *(undefined8 *)(iVar2 + 0x8560) = uVar6;
        *(undefined8 *)(iVar2 + 0x8578) = uVar5;
        *(undefined8 *)(iVar2 + 0x8570) = uVar4;
        *(char *)(param_1 + 0xc98) = '\x01';
      }
      puVar3 = (undefined8 *)FUN_100391e0(*piVar1 + 0x8540,auStack_80,*piVar1 + 0x40);
      iVar2 = *piVar1;
      uVar6 = *puVar3;
      uVar5 = puVar3[3];
      uVar4 = puVar3[2];
      *(undefined8 *)(iVar2 + 0x85c8) = puVar3[1];
      *(undefined8 *)(iVar2 + 0x85c0) = uVar6;
      *(undefined8 *)(iVar2 + 0x85d8) = uVar5;
      *(undefined8 *)(iVar2 + 0x85d0) = uVar4;
      uVar6 = puVar3[4];
      uVar5 = puVar3[7];
      uVar4 = puVar3[6];
      *(undefined8 *)(iVar2 + 0x85e8) = puVar3[5];
      *(undefined8 *)(iVar2 + 0x85e0) = uVar6;
      *(undefined8 *)(iVar2 + 0x85f8) = uVar5;
      *(undefined8 *)(iVar2 + 0x85f0) = uVar4;
      *(char *)(param_1 + 0xc9a) = '\x01';
    }
    puVar3 = (undefined8 *)FUN_100391e0(*piVar1 + 0x85c0,auStack_80,param_1 + 0xd18);
    iVar2 = *piVar1;
    uVar6 = *puVar3;
    uVar5 = puVar3[3];
    uVar4 = puVar3[2];
    *(undefined8 *)(iVar2 + 0x8608) = puVar3[1];
    *(undefined8 *)(iVar2 + 0x8600) = uVar6;
    *(undefined8 *)(iVar2 + 0x8618) = uVar5;
    *(undefined8 *)(iVar2 + 0x8610) = uVar4;
    uVar6 = puVar3[4];
    uVar5 = puVar3[7];
    uVar4 = puVar3[6];
    *(undefined8 *)(iVar2 + 0x8628) = puVar3[5];
    *(undefined8 *)(iVar2 + 0x8620) = uVar6;
    *(undefined8 *)(iVar2 + 0x8638) = uVar5;
    *(undefined8 *)(iVar2 + 0x8630) = uVar4;
    *(undefined1 *)(param_1 + 0xc9b) = 1;
  }
  return;
}

