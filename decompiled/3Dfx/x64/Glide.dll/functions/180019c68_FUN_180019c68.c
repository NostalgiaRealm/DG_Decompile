/*
 * FUN_180019c68 at 180019c68
 * undefined __fastcall FUN_180019c68(longlong param_1)
 * Address ranges: 180019c68-180019f9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019c68(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  longlong local_res8;
  int local_res10 [2];
  longlong local_48;
  longlong local_40;
  
  puVar7 = (uint *)0x0;
  local_res8._0_4_ = 0;
  local_res10[0] = 0;
  FUN_180021868(param_1,(int *)&local_res8,local_res10);
  puVar3 = puVar7;
  if ((int)local_res8 != -1) {
    puVar3 = (uint *)(param_1 + 0x3630 + (longlong)(int)local_res8 * 0x170);
  }
  puVar2 = puVar7;
  if (local_res10[0] != -1) {
    puVar2 = (uint *)(param_1 + 0x3630 + (longlong)local_res10[0] * 0x170);
  }
  if ((((puVar3 != (uint *)0x0) && (puVar2 != (uint *)0x0)) &&
      ((((char)puVar2[0x12] != '\0' && (puVar2[10] < puVar3[10])) || (puVar2[0xb] < puVar3[0xb]))))
     && (puVar2 = puVar7, *(longlong *)(puVar3 + 0x3e) == 0)) {
    FUN_180030350(puVar3,(ulonglong)puVar3[10],puVar3[0xb],puVar3[0xc],
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
  uVar4 = *(uint *)(param_1 + 0x3220);
  if (puVar8 != (uint *)0x0) {
    uVar4 = puVar8[0x3b];
  }
  if (puVar7 == (uint *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x3220) + 1;
  }
  else {
    uVar5 = puVar7[0x3b];
  }
  FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),&local_48,uVar4,0);
  FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),&local_40,uVar5,0);
  if ((puVar6 == (uint *)0x0) || ((char)puVar6[0x12] == '\0')) {
    FUN_180048a98(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),2,&local_48,0,
                  (longlong *)0x0);
    *(undefined4 *)(param_1 + 0x32b4) = 0;
  }
  else {
    FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1940),&local_res8,puVar6[0x41],0
                 );
    FUN_180048a98(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),2,&local_48,0,&local_res8)
    ;
    *(uint *)(param_1 + 0x32b4) = puVar6[0x42];
    piVar1 = *(int **)(param_1 + 0x3278);
    if (((*piVar1 != 0) && (piVar1[1] != 0)) || (uVar4 = 0x20, piVar1[3] != 0)) {
      uVar4 = 0x10;
    }
    FUN_180047f04(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(puVar6 + 0x3e),0,0,uVar4);
    if (puVar6[0x42] == 0x2d) {
      FUN_180047f04(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                    *(ulonglong *)(puVar6 + 0x3e),1,0,uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x3290) = 2;
  uVar4 = 1;
  if (puVar7 != (uint *)0x0) {
    FUN_180047f04(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(puVar7 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3298) = puVar7[0x3c];
    uVar4 = puVar2[0xc];
  }
  if (puVar8 != (uint *)0x0) {
    FUN_180047f04(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(puVar8 + 0x36),0,0,4);
    *(uint *)(param_1 + 0x3294) = puVar8[0x3c];
    uVar4 = puVar3[0xc];
  }
  *(uint *)(param_1 + 0x32b8) = uVar4;
  *(undefined4 *)(param_1 + 0x32bc) = 0;
  *(undefined1 *)(param_1 + 0x32da) = 1;
  return;
}

