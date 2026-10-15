/*
 * FUN_1000e7d7 at 1000e7d7
 * undefined __fastcall FUN_1000e7d7(uint * param_1, int * param_2, int param_3, byte param_4)
 * Address ranges: 1000e7d7-1000e90b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000e7d7(uint *param_1,int *param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *extraout_ECX;
  ulonglong uVar6;
  undefined8 local_18;
  int *local_10;
  uint local_c;
  uint *local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  uVar6 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 0x10),*(byte *)(param_3 + 8),'\0',0,
                       '\x01','\0');
  local_c = (uint)uVar6;
  local_18 = CONCAT44((int)(uVar6 >> 0x20),(uint)local_18);
  FUN_1000b9b4((int)param_1,local_c);
  uVar6 = FUN_1000b651(extraout_ECX,param_2,*(ushort *)(param_3 + 0x12),0xe4,'\0',0,'\0','\0');
  local_18 = FUN_1000b9c3(local_8,-1,'\x01');
  uVar3 = local_c;
  piVar2 = local_10;
  uVar5 = (uint)local_18;
  FUN_10001877(local_10,local_c,0x130700,0xc202,(uint)uVar6,(int)(uVar6 >> 0x20),
               (uint)(byte)(&DAT_100d4bff)[*(byte *)(param_3 + 2)]);
  FUN_10001877(piVar2,uVar5,0x100700,0x5002,uVar3,0,0);
  FUN_10001877(piVar2,uVar5,0x12010,0x208102,0xffffffff,0,
               1 << ((byte)*(undefined4 *)(param_3 + 0xc) & 3));
  puVar4 = local_8;
  FUN_1000ba3d((int)local_8,piVar2,(uint *)&local_18);
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)puVar4 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  FUN_1000f71e(puVar4,piVar2,'\0');
  FUN_10001877(piVar2,0xffffffff,0x110000,(param_4 ^ 1 | 4) << 8 | 0x8001,0xffffffff,0,0);
  return;
}

