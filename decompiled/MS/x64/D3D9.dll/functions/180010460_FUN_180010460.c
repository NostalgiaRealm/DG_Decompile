/*
 * FUN_180010460 at 180010460
 * undefined __fastcall FUN_180010460(uint * param_1, longlong * param_2, longlong param_3, byte param_4)
 * Address ranges: 180010460-1800105ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010460(uint *param_1,longlong *param_2,longlong param_3,byte param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iStackX_1c;
  undefined8 local_48 [2];
  
  uVar2 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 0x10),*(byte *)(param_3 + 8),'\0',0,
                        '\x01','\0');
  uVar6 = (uint)uVar2;
  if ((uVar2 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar6 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar6 & 7);
  }
  plVar5 = param_2;
  uVar3 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 0x12),0xe4,'\0',0,'\0','\0');
  uVar4 = FUN_18000cef4((longlong)param_1,plVar5,-1,'\x01');
  iStackX_1c = (int)(uVar3 >> 0x20);
  local_48[0] = uVar4;
  FUN_1800019cc(param_2,0xc20200130700,uVar6,(int)uVar3,iStackX_1c,
                (uint)(byte)(&DAT_180100f5f)[*(byte *)(param_3 + 2)]);
  FUN_1800019cc(param_2,0x500200100700,(uint)uVar4,uVar6,0,0);
  FUN_1800019cc(param_2,0x20810200012010,(uint)uVar4,-1,0,
                1 << ((byte)*(undefined4 *)(param_3 + 0xc) & 3));
  FUN_18000cf80((longlong)param_1,param_2,(uint *)local_48);
  if ((uVar2 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar6 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar6 & 7));
  }
  FUN_180011adc(param_1,param_2,'\0');
  FUN_1800019cc(param_2,(ulonglong)param_4 << 0x28 ^ 0x10000000000 | 0x840100110000,0xffffffff,-1,0,
                0);
  return;
}

