/*
 * FUN_18000dbe8 at 18000dbe8
 * undefined __cdecl FUN_18000dbe8(longlong param_1)
 * Address ranges: 18000dbe8-18000dea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000dbe8(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_60 [2];
  uint local_58 [2];
  longlong lStack_50;
  longlong lStack_48;
  
  local_60[0] = 0;
  local_58[0] = 0;
  FUN_1800171c0(param_1,local_60,local_58);
  puVar1 = (uint *)(param_1 + (longlong)(int)local_60[0] * 0x170 + 0x37b0);
  if (local_60[0] == 0xffffffff) {
    puVar1 = (uint *)0x0;
  }
  puVar8 = (uint *)(param_1 + (longlong)(int)local_58[0] * 0x170 + 0x37b0);
  if (local_58[0] == 0xffffffff) {
    puVar8 = (uint *)0x0;
  }
  if (((puVar1 != (uint *)0x0) && (puVar8 != (uint *)0x0)) &&
     ((((char)puVar8[0x12] != '\0' && (puVar8[10] < puVar1[10])) || (puVar8[0xb] < puVar1[0xb])))) {
    if (*(longlong *)(puVar1 + 0x3e) == 0) {
      FUN_180026fd8(puVar1,(ulonglong)puVar1[10],puVar1[0xb],puVar1[0xc],
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
  uVar3 = *(uint *)(param_1 + 0x33a0);
  if (puVar7 != (uint *)0x0) {
    uVar3 = puVar7[0x3b];
  }
  if (puVar6 == (uint *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x33a0) + 1;
  }
  else {
    uVar5 = puVar6[0x3b];
  }
  FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),&lStack_50,uVar3,0);
  FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),&lStack_48,uVar5,0);
  if ((puVar2 == (uint *)0x0) || ((char)puVar2[0x12] == '\0')) {
    FUN_18004f918(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),2,&lStack_50,0,
                  (longlong *)0x0);
    *(undefined4 *)(param_1 + 0x3434) = 0;
  }
  else {
    FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1940),(longlong *)local_58,
                  puVar2[0x41],0);
    FUN_18004f918(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),2,&lStack_50,0,
                  (longlong *)local_58);
    piVar4 = *(int **)(param_1 + 0x33f8);
    *(uint *)(param_1 + 0x3434) = puVar2[0x42];
    if (((*piVar4 == 0) || (piVar4[1] == 0)) && (piVar4[3] == 0)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0x10;
    }
    FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(puVar2 + 0x3e),0,0,uVar3);
    if (puVar2[0x42] == 0x2d) {
      FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                    *(ulonglong *)(puVar2 + 0x3e),1,0,uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x3410) = 2;
  uVar3 = 1;
  if (puVar6 != (uint *)0x0) {
    FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(puVar6 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3418) = puVar6[0x3c];
    uVar3 = puVar8[0xc];
  }
  if (puVar7 != (uint *)0x0) {
    FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(puVar7 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3414) = puVar7[0x3c];
    uVar3 = puVar1[0xc];
  }
  *(uint *)(param_1 + 0x3438) = uVar3;
  *(undefined4 *)(param_1 + 0x343c) = 0;
  *(undefined1 *)(param_1 + 0x345a) = 1;
  return;
}

