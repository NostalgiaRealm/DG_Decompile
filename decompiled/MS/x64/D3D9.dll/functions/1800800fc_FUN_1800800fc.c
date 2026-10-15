/*
 * FUN_1800800fc at 1800800fc
 * undefined __fastcall FUN_1800800fc(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4)
 * Address ranges: 1800800fc-1800806ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800800fc(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte bVar7;
  
  puVar1 = (uint *)(param_3 + 0x20);
  uVar4 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
  *(uint *)(param_3 + 0x164) = uVar4;
  FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)uVar4);
  FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)uVar4);
  bVar3 = false;
  uVar4 = 0;
  if (*(char *)(param_3 + 0x1c1) == '\0') {
    FUN_1800ec960((longlong)puVar1,*(uint *)(param_3 + 0x15c));
    *(undefined4 *)(param_3 + 0x15c) = 0;
  }
  uVar6 = FUN_1800ee040(*puVar1);
  if (((int)uVar6 == 0x51) || (*(char *)(param_3 + 0x75) == '\0')) {
    FUN_18007e5fc(param_1,param_3,param_2,0x11,0,1,*(uint *)(param_3 + 0x164));
    FUN_18007e5fc(param_1,param_3,param_2,0x11,0,2,*(uint *)(param_3 + 0x164));
    if (param_4 == 0) {
      FUN_18007e5fc(param_1,param_3,param_2,0x11,0,8,*(uint *)(param_3 + 0x164));
    }
    else {
      FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)param_4);
      FUN_18007e5fc(param_1,param_3,param_2,0x36,0,8,param_4);
    }
  }
  else {
    uVar4 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)uVar4);
    FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)uVar4);
    FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)uVar4);
    bVar3 = true;
    if (param_4 != 0) {
      FUN_1800edbe0(puVar1,param_2,0x36,(ulonglong)param_4);
    }
  }
  FUN_18007e5fc(param_1,param_3,param_2,0x11,0,4,*(uint *)(param_3 + 0x164));
  uVar5 = *(uint *)(param_3 + 0x164);
  if (*(char *)(param_3 + 0x1c3) == '\0') {
    FUN_1800ec960((longlong)puVar1,uVar5);
    *(undefined4 *)(param_3 + 0x164) = 0;
  }
  else if (uVar5 != 0) {
    bVar7 = (byte)(uVar5 >> 0x12) & 3;
    pbVar2 = (byte *)(*(longlong *)(param_3 + 0x50) + (ulonglong)(uVar5 & 0xff));
    *pbVar2 = *pbVar2 & ~(('\x01' << ((byte)(uVar5 >> 0x14) & 7)) + -1 << bVar7);
    pbVar2 = (byte *)(*(longlong *)(param_3 + 0x50) + (ulonglong)(uVar5 & 0xff));
    *pbVar2 = *pbVar2 | '\a' << bVar7;
  }
  if (bVar3) {
    uVar5 = FUN_1800ec8c0((longlong)puVar1,2,'\0');
    FUN_1800edbe0(puVar1,param_2,0xe,(ulonglong)uVar5);
    FUN_18007e5fc(param_1,param_3,param_2,0x32,0,3,uVar5);
    FUN_18007e5fc(param_1,param_3,param_2,0x36,0,8,uVar4);
    FUN_1800ec960((longlong)puVar1,uVar5);
  }
  FUN_1800ec960((longlong)puVar1,uVar4);
  return;
}

