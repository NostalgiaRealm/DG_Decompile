/*
 * FUN_180019670 at 180019670
 * undefined __cdecl FUN_180019670(longlong param_1)
 * Address ranges: 180019670-18001992b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019670(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int local_60 [2];
  longlong local_58;
  longlong lStack_50;
  longlong lStack_48;
  
  local_60[0] = 0;
  local_58._0_4_ = 0;
  FUN_180022cd8(param_1,local_60,(int *)&local_58);
  puVar1 = (uint *)(param_1 + (longlong)local_60[0] * 0x170 + 0x3630);
  if (local_60[0] == -1) {
    puVar1 = (uint *)0x0;
  }
  puVar8 = (uint *)(param_1 + (longlong)(int)local_58 * 0x170 + 0x3630);
  if ((int)local_58 == -1) {
    puVar8 = (uint *)0x0;
  }
  if (((puVar1 != (uint *)0x0) && (puVar8 != (uint *)0x0)) &&
     ((((char)puVar8[0x12] != '\0' && (puVar8[10] < puVar1[10])) || (puVar8[0xb] < puVar1[0xb])))) {
    if (*(longlong *)(puVar1 + 0x3e) == 0) {
      FUN_180032620(puVar1,(ulonglong)puVar1[10],puVar1[0xb],puVar1[0xc],
                    (uint)*(byte *)(*(longlong *)(param_1 + 8) + 0x54),(longlong *)(puVar1 + 0x3e),
                    puVar1 + 0x40,puVar1 + 0x41);
    }
    puVar8 = (uint *)0x0;
  }
  if (puVar1 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = puVar1;
    if ((char)puVar1[0x12] != '\0') {
      puVar7 = (uint *)0x0;
    }
  }
  if (puVar8 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = puVar8;
    if ((char)puVar8[0x12] == '\0') {
      puVar6 = (uint *)0x0;
    }
  }
  puVar2 = puVar6;
  if (puVar6 == (uint *)0x0) {
    puVar2 = puVar1;
  }
  uVar3 = *(uint *)(param_1 + 0x3220);
  if (puVar7 != (uint *)0x0) {
    uVar3 = puVar7[0x3b];
  }
  if (puVar6 == (uint *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x3220) + 1;
  }
  else {
    uVar5 = puVar6[0x3b];
  }
  FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),&lStack_50,uVar3,0);
  FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),&lStack_48,uVar5,0);
  if ((puVar2 == (uint *)0x0) || ((char)puVar2[0x12] == '\0')) {
    FUN_18004bd88(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),2,&lStack_50,0,
                  (longlong *)0x0);
    *(undefined4 *)(param_1 + 0x32b4) = 0;
  }
  else {
    FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1940),&local_58,puVar2[0x41],0);
    FUN_18004bd88(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),2,&lStack_50,0,&local_58);
    piVar4 = *(int **)(param_1 + 0x3278);
    *(uint *)(param_1 + 0x32b4) = puVar2[0x42];
    if (((*piVar4 == 0) || (piVar4[1] == 0)) && (piVar4[3] == 0)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0x10;
    }
    FUN_18004b098(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(puVar2 + 0x3e),0,0,uVar3);
    if (puVar2[0x42] == 0x2d) {
      FUN_18004b098(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                    *(ulonglong *)(puVar2 + 0x3e),1,0,uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x3290) = 2;
  uVar3 = 1;
  if (puVar6 != (uint *)0x0) {
    FUN_18004b098(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(puVar6 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3298) = puVar6[0x3c];
    uVar3 = puVar8[0xc];
  }
  if (puVar7 != (uint *)0x0) {
    FUN_18004b098(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(puVar7 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3294) = puVar7[0x3c];
    uVar3 = puVar1[0xc];
  }
  *(uint *)(param_1 + 0x32b8) = uVar3;
  *(undefined4 *)(param_1 + 0x32bc) = 0;
  *(undefined1 *)(param_1 + 0x32da) = 1;
  return;
}

