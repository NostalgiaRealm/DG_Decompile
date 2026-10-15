/*
 * FUN_10035976 at 10035976
 * uint __stdcall FUN_10035976(int * param_1)
 * Address ranges: 10035976-100361fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10035976(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bStack0000000b;
  int *in_stack_00000014;
  uint in_stack_0000001c;
  uint local_18;
  byte local_5;
  
  if (((in_stack_0000001c >> 0xe & 1) != 0) || (local_5 = 1, (in_stack_0000001c >> 0xd & 1) != 0)) {
    local_5 = 0;
  }
  uVar6 = FUN_10056ee5((int)param_1,4,'\x01');
  uVar7 = FUN_10056ee5((int)param_1,2,'\x01');
  FUN_10057c8a(param_1,in_stack_00000014,0x36);
  FUN_10057c8a(param_1,in_stack_00000014,0x32);
  if (local_5 == 0) {
    uVar8 = FUN_10056ee5((int)param_1,2,'\x01');
    param_1[0x91] = uVar8;
    FUN_10057c8a(param_1,in_stack_00000014,0x1a);
  }
  FUN_10057c8a(param_1,in_stack_00000014,local_5 ^ 1 | 0x40);
  if (local_5 == 0) {
    FUN_10057c8a(param_1,in_stack_00000014,0);
  }
  uVar8 = in_stack_0000001c >> 0xb & 3;
  if ((uVar8 == 2) || (uVar8 == 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar9 = in_stack_0000001c >> 9 & 3;
  if ((uVar9 == 2) || (uVar9 == 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar4 = 0;
  if (uVar8 != 2) {
    bVar4 = 2;
  }
  if ((uVar9 == 2) && (uVar8 != 1)) {
LAB_10035b8b:
    bStack0000000b = 0;
  }
  else {
    bVar4 = bVar4 | 1;
    bStack0000000b = 1;
    if (uVar9 != 1) goto LAB_10035b8b;
  }
  if (uVar8 == 1) {
    bStack0000000b = bStack0000000b | 2;
  }
  else if (uVar8 == 3) {
    bVar5 = 2;
    goto LAB_10035b9a;
  }
  bVar5 = 0;
LAB_10035b9a:
  bVar5 = uVar9 == 3 | bVar5;
  if (bVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_10056ee5((int)param_1,(uint)(local_5 ^ 1) * 2 + 2,'\x01');
  }
  param_1[0x92] = uVar8;
  if (uVar8 != 0) {
    FUN_10057c8a(param_1,in_stack_00000014,0x1b);
  }
  if (bVar2 || bVar3) {
    FUN_10056ee5((int)param_1,2,'\0');
    FUN_10057c8a(param_1,in_stack_00000014,0);
    FUN_10057c8a(param_1,in_stack_00000014,0x34);
    FUN_10057c8a(param_1,in_stack_00000014,0x33);
  }
  if (bVar4 != 0) {
    if (local_5 == 0) {
      local_18 = FUN_10056ee5((int)param_1,4,'\x01');
    }
    else {
      local_18 = (uVar6 & 0xc0000) + 0x80000 | uVar6 & 0xffa3ffff | 0x200000;
    }
    iVar1 = (uint)(local_5 ^ 1) * 2 + 2;
    uVar8 = FUN_10056ee5((int)param_1,iVar1,'\x01');
    if (bStack0000000b != 0) {
      FUN_10056ee5((int)param_1,iVar1,'\0');
    }
    FUN_10057c8a(param_1,in_stack_00000014,0xe);
    FUN_10057c8a(param_1,in_stack_00000014,0x43);
    if (bStack0000000b != 0) {
      FUN_10057c8a(param_1,in_stack_00000014,0x1b);
      FUN_10057c8a(param_1,in_stack_00000014,0x31);
      FUN_10057c8a(param_1,in_stack_00000014,0x1e);
      FUN_10057c8a(param_1,in_stack_00000014,1);
    }
    FUN_10057c8a(param_1,in_stack_00000014,0);
    FUN_10057c8a(param_1,in_stack_00000014,0x38);
    FUN_10057c8a(param_1,in_stack_00000014,1);
    FUN_10057c8a(param_1,in_stack_00000014,0x39);
    FUN_10057c8a(param_1,in_stack_00000014,1);
    FUN_10057c8a(param_1,in_stack_00000014,0);
    FUN_10057c8a(param_1,in_stack_00000014,0x37);
    if (bStack0000000b != 0) {
      FUN_10057c8a(param_1,in_stack_00000014,0);
      FUN_10057c8a(param_1,in_stack_00000014,0);
      FUN_10057c8a(param_1,in_stack_00000014,0x37);
      FUN_10057c8a(param_1,in_stack_00000014,0x31);
      FUN_10057c8a(param_1,in_stack_00000014,1);
      FUN_10057c8a(param_1,in_stack_00000014,0);
    }
    FUN_10056fd9((int)param_1,uVar8);
    if (local_5 == 0) {
      FUN_10056fd9((int)param_1,local_18);
    }
  }
  FUN_10056fd9((int)param_1,uVar7);
  FUN_10057c8a(param_1,in_stack_00000014,0x1c);
  if (bVar5 != 0) {
    FUN_10057c8a(param_1,in_stack_00000014,0x27);
    if (bVar5 == 1) {
      if (local_5 == 0) {
        FUN_10057c8a(param_1,in_stack_00000014,0x36);
        return uVar6;
      }
    }
    else {
      if (bVar5 == 2) {
        FUN_10057c8a(param_1,in_stack_00000014,0x36);
      }
      else if (bVar5 == 3) {
        FUN_10057c8a(param_1,in_stack_00000014,0x3c);
      }
      if (local_5 == 0) {
        return uVar6;
      }
    }
    FUN_10056f83((int)param_1,param_1[0x92],1);
  }
  return uVar6;
}

