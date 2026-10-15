/*
 * FUN_18000c730 at 18000c730
 * undefined __fastcall FUN_18000c730(longlong param_1)
 * Address ranges: 18000c730-18000ca64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000c730(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong local_48;
  longlong local_40;
  
  puVar7 = (uint *)0x0;
  local_res8[0] = 0;
  local_res10[0] = 0;
  FUN_180014a4c(param_1,local_res8,local_res10);
  puVar3 = puVar7;
  if (local_res8[0] != 0xffffffff) {
    puVar3 = (uint *)(param_1 + 0x37b0 + (longlong)(int)local_res8[0] * 0x170);
  }
  puVar2 = puVar7;
  if (local_res10[0] != 0xffffffff) {
    puVar2 = (uint *)(param_1 + 0x37b0 + (longlong)(int)local_res10[0] * 0x170);
  }
  if ((((puVar3 != (uint *)0x0) && (puVar2 != (uint *)0x0)) &&
      ((((char)puVar2[0x12] != '\0' && (puVar2[10] < puVar3[10])) || (puVar2[0xb] < puVar3[0xb]))))
     && (puVar2 = puVar7, *(longlong *)(puVar3 + 0x3e) == 0)) {
    FUN_180022900(puVar3,(ulonglong)puVar3[10],puVar3[0xb],puVar3[0xc],
                  *(char *)(*(longlong *)(param_1 + 8) + 0x54),(longlong *)(puVar3 + 0x3e),
                  puVar3 + 0x40,puVar3 + 0x41);
  }
  puVar8 = puVar7;
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[0x12] == '\0')) {
    puVar8 = puVar3;
  }
  if (puVar2 != (uint *)0x0) {
    puVar7 = (uint *)(-(ulonglong)((char)puVar2[0x12] != '\0') & (ulonglong)puVar2);
  }
  puVar6 = puVar3;
  if (puVar7 != (uint *)0x0) {
    puVar6 = puVar7;
  }
  uVar4 = *(uint *)(param_1 + 0x33a0);
  if (puVar8 != (uint *)0x0) {
    uVar4 = puVar8[0x3b];
  }
  if (puVar7 == (uint *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x33a0) + 1;
  }
  else {
    uVar5 = puVar7[0x3b];
  }
  FUN_1800493ac(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),&local_48,uVar4,0);
  FUN_1800493ac(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),&local_40,uVar5,0);
  if ((puVar6 == (uint *)0x0) || ((char)puVar6[0x12] == '\0')) {
    FUN_18004abfc(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),2,&local_48,0,
                  (longlong *)0x0);
    *(undefined4 *)(param_1 + 0x3434) = 0;
  }
  else {
    FUN_1800493ac(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1940),(longlong *)local_res8,
                  puVar6[0x41],0);
    FUN_18004abfc(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),2,&local_48,0,
                  (longlong *)local_res8);
    *(uint *)(param_1 + 0x3434) = puVar6[0x42];
    piVar1 = *(int **)(param_1 + 0x33f8);
    if (((*piVar1 != 0) && (piVar1[1] != 0)) || (uVar4 = 0x20, piVar1[3] != 0)) {
      uVar4 = 0x10;
    }
    FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(puVar6 + 0x3e),0,0,uVar4);
    if (puVar6[0x42] == 0x2d) {
      FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                    *(ulonglong *)(puVar6 + 0x3e),1,0,uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x3410) = 2;
  uVar4 = 1;
  if (puVar7 != (uint *)0x0) {
    FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(puVar7 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3418) = puVar7[0x3c];
    uVar4 = puVar2[0xc];
  }
  if (puVar8 != (uint *)0x0) {
    FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(puVar8 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3414) = puVar8[0x3c];
    uVar4 = puVar3[0xc];
  }
  *(uint *)(param_1 + 0x3438) = uVar4;
  *(undefined4 *)(param_1 + 0x343c) = 0;
  *(undefined1 *)(param_1 + 0x345a) = 1;
  return;
}

