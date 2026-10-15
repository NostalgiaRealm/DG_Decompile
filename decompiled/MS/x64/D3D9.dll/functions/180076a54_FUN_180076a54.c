/*
 * FUN_180076a54 at 180076a54
 * undefined __fastcall FUN_180076a54(uint * param_1, longlong * param_2, longlong * param_3, longlong param_4)
 * Address ranges: 180076a54-18007730e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180076a54(uint *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint local_res20;
  undefined2 local_res25;
  undefined1 local_res27;
  uint in_stack_00000040;
  uint in_stack_00000048;
  char local_58 [32];
  
  puVar1 = (uint *)(param_4 + 0x20);
  local_res20 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  if (*(char *)(param_4 + 0x540) == '\0') {
    *(undefined2 *)(param_4 + 0x235) = local_res25;
    *(undefined1 *)(param_4 + 0x237) = local_res27;
    *(uint *)(param_4 + 0x230) = local_res20;
    *(undefined1 *)(param_4 + 0x234) = 0;
  }
  else {
    *(uint *)(param_4 + 0xe4) = local_res20 | 0x10000000;
  }
  FUN_1800edbe0(puVar1,param_2,0x2a,(ulonglong)local_res20);
  FUN_1800edbe0(puVar1,param_2,0x26,(ulonglong)*(uint *)(param_4 + 0x4a0));
  uVar2 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  uVar3 = FUN_1800ec8c0((longlong)puVar1,1,'\0');
  FUN_1800edbe0(puVar1,param_2,1,(ulonglong)uVar2);
  FUN_1800edbe0(puVar1,param_2,1,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x57,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x3c,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x4001f,0xffffffff);
  FUN_1800edbe0(puVar1,param_2,0x37,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x3c,(ulonglong)in_stack_00000048);
  FUN_1800edbe0(puVar1,param_2,0x29,(ulonglong)in_stack_00000040);
  uVar3 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
  FUN_1800edbe0(puVar1,param_2,0x1e,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x2a,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x56,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0xe,(ulonglong)uVar3);
  FUN_1800ec960((longlong)puVar1,uVar3);
  uVar3 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
  *(uint *)(param_4 + 0x4b0) = uVar3;
  FUN_1800edbe0(puVar1,param_2,0x37,(ulonglong)uVar3);
  FUN_1800edbe0(puVar1,param_2,0x37,(ulonglong)*(uint *)(param_4 + 0x4b0));
  FUN_1800ec960((longlong)puVar1,uVar2);
  uVar2 = 0;
  FUN_1800edbe0(puVar1,param_2,0x32,(ulonglong)*(uint *)(param_4 + 0x4b0));
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)*(uint *)(param_4 + 0x4b0));
  FUN_1800edbe0(puVar1,param_2,0,(ulonglong)*(uint *)(param_4 + 0x4b0));
  if ((*(char *)(param_4 + 0x53e) != '\0') || (*(char *)(param_4 + 0x53f) != '\0')) {
    uVar3 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4b4) = uVar3;
    FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)uVar3);
  }
  if (*(char *)(param_4 + 0x53e) != '\0') {
    uVar3 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4b8) = uVar3;
    FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)uVar3);
  }
  uVar3 = *(uint *)(param_4 + 0x70);
  *(uint *)(param_4 + 0x70) = uVar3 + 1;
  *(uint *)(param_4 + 0x60 + (ulonglong)uVar3 * 4) =
       ((*(uint *)(param_4 + 0x520) >> 0xc & 0xf) + 1) * *(int *)(param_4 + 0x52c);
  if (*(char *)(param_4 + 0x540) == '\0') {
    FUN_1800796d8(param_1,param_2,param_3,param_4,uVar3);
  }
  else {
    *(uint *)(param_4 + 0xe8) = uVar3;
    FUN_1800841cc((longlong *)param_1,param_2,param_4);
  }
  if (*(uint *)(param_4 + 0x4b8) != 0) {
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4b8));
    *(undefined4 *)(param_4 + 0x4b8) = 0;
  }
  if (*(uint *)(param_4 + 0x4b4) != 0) {
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4b4));
    *(undefined4 *)(param_4 + 0x4b4) = 0;
  }
  FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4b0));
  *(undefined4 *)(param_4 + 0x4b0) = 0;
  FUN_1800edbe0(puVar1,param_2,0x15,0);
  uVar3 = local_res20;
  do {
    puVar4 = puVar1;
    FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)(uVar2 | 0x410200));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  local_res20 = local_res20 & 0xffffff00;
  local_58[0] = '\0';
  FUN_18007aab8(puVar4,param_4,(undefined1 *)&local_res20,local_58);
  if ((char)local_res20 != '\0') {
    FUN_1800edbe0(puVar1,param_2,0x36,0x41020d);
  }
  if (local_58[0] != '\0') {
    FUN_1800edbe0(puVar1,param_2,0x36,0x41020e);
  }
  FUN_1800ec960((longlong)puVar1,uVar3);
  FUN_1800edbe0(puVar1,param_2,0x75,0xffffffff);
  return;
}

