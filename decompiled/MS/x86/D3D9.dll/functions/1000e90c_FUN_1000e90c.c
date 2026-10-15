/*
 * FUN_1000e90c at 1000e90c
 * undefined __fastcall FUN_1000e90c(uint * param_1, int * param_2, int param_3, char param_4)
 * Address ranges: 1000e90c-1000e9f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000e90c(uint *param_1,int *param_2,int param_3,char param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 local_14;
  uint *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_2;
  uVar5 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 0x10),0xe4,'\0',0,'\x01','\x01');
  local_14._4_4_ = (undefined4)(uVar5 >> 0x20);
  local_14 = FUN_1000b9c3(param_1,-1,'\x01');
  uVar3 = (uint)local_14;
  FUN_10001877(local_8,uVar3,0x100700,0x5002,(uint)uVar5,0,0);
  piVar2 = local_8;
  FUN_10001877(local_8,uVar3,0x12010,0x208102,0xffffffff,0,
               1 << ((byte)*(undefined4 *)(param_3 + 8) & 3));
  puVar1 = local_c;
  FUN_1000ba3d((int)local_c,piVar2,(uint *)&local_14);
  FUN_1000f71e(puVar1,piVar2,'\0');
  if (param_4 == '\0') {
    bVar4 = *(char *)(param_3 + 1) == '\0';
  }
  else {
    bVar4 = *(char *)(param_3 + 1) != '\0';
  }
  FUN_10001877(piVar2,0xffffffff,0x110000,(bVar4 + 4) * 0x100 | 0x8001,0xffffffff,0,0);
  return;
}

