/*
 * FUN_180075ff4 at 180075ff4
 * undefined __fastcall FUN_180075ff4(uint * param_1, longlong * param_2, longlong * param_3, longlong param_4)
 * Address ranges: 180075ff4-180076a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180075ff4(uint *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_res20;
  
  uVar2 = *(uint *)(param_4 + 0x4ac);
  puVar1 = (uint *)(param_4 + 0x20);
  uVar3 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  uVar4 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  if (uVar2 == 0) {
    local_res20 = 0;
    uVar10 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
    uVar9 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
    uVar5 = uVar10;
  }
  else {
    uVar10 = uVar2 & 0xff9fffff | 0x100000;
    uVar9 = (uVar2 & 0xc0000) + 0x40000 | uVar2 & 0xff93ffff | 0x100000;
    local_res20 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
    FUN_1800edbe0(puVar1,param_2,0x2a,(ulonglong)uVar3);
    FUN_1800edbe0(puVar1,param_2,0x29,(ulonglong)uVar3);
    uVar5 = local_res20;
  }
  FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar5);
  if ((*(uint *)(param_4 + 0x4a4) & 0x3f00) == 0) {
    uVar5 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
    *(uint *)(param_4 + 0x4a8) = uVar5;
    FUN_1800edbe0(puVar1,param_2,0x56,(ulonglong)uVar5);
  }
  uVar5 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  uVar6 = *(uint *)(param_4 + 0x4a4) & 0x3f00;
  if (uVar2 == 0) {
    if (uVar6 != 0) {
      FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar5);
      goto LAB_180076399;
    }
  }
  else if (uVar6 == 0) {
    FUN_1800edbe0(puVar1,param_2,0x23,(ulonglong)uVar5);
    FUN_1800edbe0(puVar1,param_2,0x23,(ulonglong)uVar5);
    goto LAB_180076399;
  }
  FUN_1800edbe0(puVar1,param_2,0x23,(ulonglong)uVar5);
LAB_180076399:
  FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x30,0);
  uVar6 = FUN_1800ec8c0((longlong)puVar1,1,'\0');
  FUN_1800edbe0(puVar1,param_2,0x4f,(ulonglong)uVar6);
  FUN_1800edbe0(puVar1,param_2,3,0xffffffff);
  if (uVar2 == 0) {
    FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar3);
    FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar9);
  }
  uVar6 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
  FUN_1800edbe0(puVar1,param_2,0x2a,(ulonglong)uVar6);
  uVar7 = FUN_1800ec8c0((longlong)puVar1,2,'\x01');
  FUN_1800edbe0(puVar1,param_2,0x1e,(ulonglong)uVar7);
  FUN_1800edbe0(puVar1,param_2,0x56,(ulonglong)uVar7);
  FUN_1800edbe0(puVar1,param_2,0xe,(ulonglong)uVar7);
  FUN_1800edbe0(puVar1,param_2,0x30,0);
  uVar8 = FUN_1800ec8c0((longlong)puVar1,1,'\0');
  FUN_1800edbe0(puVar1,param_2,0x4f,(ulonglong)uVar8);
  FUN_1800edbe0(puVar1,param_2,3,0xffffffff);
  FUN_180076a54(param_1,param_2,param_3,param_4);
  if (uVar2 != 0) {
    uVar8 = FUN_1800ec8c0((longlong)puVar1,1,'\0');
    FUN_1800edbe0(puVar1,param_2,0x1e,(ulonglong)local_res20);
    FUN_1800edbe0(puVar1,param_2,0x50,(ulonglong)uVar8);
    FUN_1800edbe0(puVar1,param_2,0x37,(ulonglong)uVar10);
    FUN_1800edbe0(puVar1,param_2,0x40003,0xffffffff);
  }
  FUN_1800edbe0(puVar1,param_2,0x1e,(ulonglong)uVar9);
  FUN_1800edbe0(puVar1,param_2,0x16,0);
  FUN_1800edbe0(puVar1,param_2,0x1e,(ulonglong)uVar5);
  FUN_1800edbe0(puVar1,param_2,0x76,0xffffffff);
  FUN_1800edbe0(puVar1,param_2,0x1e,(ulonglong)uVar10);
  if (uVar2 != 0) {
    FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar3);
    FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar9);
  }
  FUN_1800edbe0(puVar1,param_2,0x16,0);
  if (uVar2 == 0) {
    FUN_1800ec960((longlong)puVar1,uVar10);
    FUN_1800ec960((longlong)puVar1,uVar9);
  }
  if (local_res20 != 0) {
    FUN_1800ec960((longlong)puVar1,local_res20);
  }
  FUN_1800ec960((longlong)puVar1,uVar5);
  FUN_1800ec960((longlong)puVar1,uVar6);
  FUN_1800ec960((longlong)puVar1,uVar7);
  FUN_1800ec960((longlong)puVar1,uVar4);
  FUN_1800ec960((longlong)puVar1,uVar3);
  if ((*(uint *)(param_4 + 0x4a8) & 0x3f00) == 0) {
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4a8));
  }
  return;
}

