/*
 * FUN_180010600 at 180010600
 * undefined __fastcall FUN_180010600(uint * param_1, longlong * param_2, longlong param_3, char param_4)
 * Address ranges: 180010600-180010740
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010600(uint *param_1,longlong *param_2,longlong param_3,char param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_res18 [2];
  
  plVar2 = param_2;
  uVar1 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 0x10),0xe4,'\0',0,'\x01','\x01');
  local_res18[0] = FUN_18000cef4((longlong)param_1,plVar2,-1,'\x01');
  uVar4 = (uint)local_res18[0];
  FUN_1800019cc(param_2,0x500200100700,uVar4,(int)uVar1,0,0);
  FUN_1800019cc(param_2,0x20810200012010,uVar4,-1,0,1 << ((byte)*(undefined4 *)(param_3 + 8) & 3));
  FUN_18000cf80((longlong)param_1,param_2,(uint *)local_res18);
  FUN_180011adc(param_1,param_2,'\0');
  if (param_4 == '\0') {
    lVar3 = 5 - (ulonglong)(*(char *)(param_3 + 1) != '\0');
  }
  else {
    lVar3 = (ulonglong)(*(char *)(param_3 + 1) != '\0') + 4;
  }
  FUN_1800019cc(param_2,lVar3 << 0x28 | 0x800100110000,0xffffffff,-1,0,0);
  return;
}

