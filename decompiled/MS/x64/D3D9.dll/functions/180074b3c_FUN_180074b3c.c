/*
 * FUN_180074b3c at 180074b3c
 * undefined __fastcall FUN_180074b3c(uint * param_1, longlong * param_2, longlong * param_3, longlong param_4)
 * Address ranges: 180074b3c-180075512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180074b3c(uint *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar1 = (uint *)(param_4 + 0x20);
  *(undefined8 *)(param_4 + 0x4c0) = 0;
  *(undefined4 *)(param_4 + 0x4bc) = 0;
  *(undefined8 *)(param_4 + 0x4cc) = 0;
  *(undefined4 *)(param_4 + 0x4c8) = 0;
  *(undefined8 *)(param_4 + 0x4d8) = 0;
  *(undefined4 *)(param_4 + 0x4d4) = 0;
  bVar2 = false;
  if (*(char *)(param_4 + 0x540) == '\0') {
    FUN_18007961c(param_1,param_4);
  }
  else {
    FUN_180078458(param_1,param_4);
  }
  *(undefined4 *)(param_4 + 0x494) = 0x110803;
  *(undefined4 *)(param_4 + 0x498) = 0x110400;
  *(undefined4 *)(param_4 + 0x4a4) = 0x110400;
  *(undefined4 *)(param_4 + 0x4a8) = 0x110400;
  *(undefined4 *)(param_4 + 0x490) = 0x410803;
  *(undefined4 *)(param_4 + 0x49c) = 0x410400;
  *(undefined4 *)(param_4 + 0x4a0) = 0x20000d00;
  if ((*(char *)(param_4 + 0x53d) != '\0') && (*(int *)(param_4 + 0x4bc) != 0)) {
    bVar2 = true;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
    *(uint *)(param_4 + 0x4a4) = uVar4;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    uVar5 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar4);
    FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar4);
    FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar4);
    FUN_1800edbe0(puVar1,param_2,0x56,(ulonglong)uVar5);
    FUN_1800edbe0(puVar1,param_2,0xe,(ulonglong)uVar5);
    FUN_1800edbe0(puVar1,param_2,0x10,(ulonglong)uVar5);
    FUN_1800edbe0(puVar1,param_2,0x1d,(ulonglong)*(uint *)(param_4 + 0x4a4));
    FUN_1800edbe0(puVar1,param_2,0x37,(ulonglong)*(uint *)(param_4 + 0x4a4));
    FUN_1800edbe0(puVar1,param_2,0x33,(ulonglong)*(uint *)(param_4 + 0x4a4));
    FUN_1800edbe0(puVar1,param_2,0x34,(ulonglong)*(uint *)(param_4 + 0x4a4));
    FUN_1800edbe0(puVar1,param_2,0x1c,(ulonglong)*(uint *)(param_4 + 0x4a4));
    FUN_1800ec960((longlong)puVar1,uVar5);
    FUN_1800ec960((longlong)puVar1,uVar4);
  }
  cVar3 = '\x01';
  if (1 < *(uint *)(param_4 + 0x538)) {
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4ac) = uVar4;
    if (bVar2) {
      FUN_1800edbe0(puVar1,param_2,0x23,(ulonglong)uVar4);
      FUN_1800edbe0(puVar1,param_2,0x1e,(ulonglong)*(uint *)(param_4 + 0x4ac));
      FUN_1800edbe0(puVar1,param_2,0x27,(ulonglong)*(uint *)(param_4 + 0x4ac));
      FUN_1800edbe0(puVar1,param_2,0x4001f,0xffffffff);
    }
    else {
      FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)uVar4);
    }
    FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)*(uint *)(param_4 + 0x4ac));
  }
  puVar6 = *(uint **)(param_4 + 0x520);
  if (((((ulonglong)puVar6 >> 9 & 1) == 0) || (*(int *)(param_4 + 0x4bc) == 0)) ||
     (*(int *)(param_4 + 0x4d4) == 0)) {
    cVar3 = '\0';
  }
  *(char *)(param_4 + 0x53e) = cVar3;
  if ((((ulonglong)puVar6 >> 10 & 1) == 0) ||
     (puVar6 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),1), *(int *)(param_4 + 0x4c8) == 0))
  {
    puVar6 = (uint *)((ulonglong)puVar6 & 0xffffffffffffff00);
  }
  *(char *)(param_4 + 0x53f) = (char)puVar6;
  if (cVar3 != '\0') {
    *(undefined4 *)(param_4 + 0x4e0) = *(undefined4 *)(param_4 + 0x4bc);
    *(undefined4 *)(param_4 + 0x4e4) = *(undefined4 *)(param_4 + 0x4c0);
    *(undefined4 *)(param_4 + 0x4e8) = *(undefined4 *)(param_4 + 0x4c4);
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4ec) = uVar4;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4f0) = uVar4;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4f4) = uVar4;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4f8) = uVar4;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x4fc) = uVar4;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x500) = uVar4;
    puVar6 = puVar1;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x504) = uVar4;
  }
  if (*(char *)(param_4 + 0x53f) != '\0') {
    *(undefined4 *)(param_4 + 0x508) = *(undefined4 *)(param_4 + 0x4c8);
    *(undefined4 *)(param_4 + 0x50c) = *(undefined4 *)(param_4 + 0x4cc);
    *(undefined4 *)(param_4 + 0x510) = *(undefined4 *)(param_4 + 0x4d0);
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x514) = uVar4;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x518) = uVar4;
    puVar6 = puVar1;
    uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    *(uint *)(param_4 + 0x51c) = uVar4;
  }
  FUN_180075514(puVar6,param_2,param_4);
  if (*(char *)(param_4 + 0x53f) != '\0') {
    FUN_180075cc4(puVar6,param_2,param_4,*(uint *)(param_4 + 0x514));
    FUN_180075cc4(puVar6,param_2,param_4,*(uint *)(param_4 + 0x518));
    FUN_180075cc4(puVar6,param_2,param_4,*(uint *)(param_4 + 0x51c));
  }
  FUN_180075ff4(param_1,param_2,param_3,param_4);
  if (*(char *)(param_4 + 0x53e) != '\0') {
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4ec));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4f0));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4f4));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4f8));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4fc));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x500));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x504));
  }
  *(undefined8 *)(param_4 + 0x500) = 0;
  *(undefined8 *)(param_4 + 0x4f8) = 0;
  *(undefined8 *)(param_4 + 0x4f0) = 0;
  *(undefined8 *)(param_4 + 0x4e8) = 0;
  *(undefined8 *)(param_4 + 0x4e0) = 0;
  if (*(char *)(param_4 + 0x53f) != '\0') {
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x514));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x518));
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x51c));
  }
  *(undefined8 *)(param_4 + 0x518) = 0;
  *(undefined8 *)(param_4 + 0x510) = 0;
  *(undefined8 *)(param_4 + 0x508) = 0;
  FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4ac));
  *(undefined4 *)(param_4 + 0x4ac) = 0;
  if ((*(uint *)(param_4 + 0x4a4) & 0x3f00) == 0) {
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_4 + 0x4a4));
    *(undefined4 *)(param_4 + 0x4a4) = 0;
  }
  if ((bVar2) && (1 < *(uint *)(param_4 + 0x538))) {
    FUN_1800edbe0(puVar1,param_2,0x15,0);
  }
  return;
}

