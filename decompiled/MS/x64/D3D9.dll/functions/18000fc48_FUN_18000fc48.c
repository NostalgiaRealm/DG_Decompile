/*
 * FUN_18000fc48 at 18000fc48
 * ulonglong __fastcall FUN_18000fc48(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18000fc48-18000fe81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000fc48(uint *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\x01','\0');
  uVar4 = (uint)uVar2;
  if ((uVar2 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  }
  uVar3 = FUN_18000ca0c(param_1,param_2,0xffff);
  FUN_1800019cc(param_2,0x110201300100,0x80000004,uVar4,-4,0);
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    FUN_1800019cc(param_2,0xd90200000000,0x80000004,-1,-4,0);
  }
  if ((*(byte *)(param_3 + 0x10) & 2) != 0) {
    FUN_1800019cc(param_2,0xd90200000000,0x80000004,-1,-4,0);
    FUN_1800019cc(param_2,0xfed90200000000,0xffffffff,-1,0,0);
    FUN_1800019cc(param_2,0x18d90200000000,0x80000004,-1,-4,0);
    FUN_1800019cc(param_2,0x110201300100,uVar4,-0x7ffffffc,-4,0);
    FUN_1800019cc(param_2,0xc60200130700,uVar4,uVar4,0,0xe0);
  }
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    FUN_1800019cc(param_2,0xffd90200000000,0xffffffff,-1,0,0);
    FUN_1800019cc(param_2,0x18d90200000000,0x80000004,-1,-4,0);
    FUN_1800019cc(param_2,0x110201300100,(uint)uVar3,-0x7ffffffc,-4,0);
    FUN_1800019cc(param_2,0x110201300100,uVar4,(uint)uVar3,0,0);
  }
  if ((uVar2 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  return uVar2 & 0xffffffff;
}

