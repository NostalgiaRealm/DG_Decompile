/*
 * FUN_1800649ec at 1800649ec
 * undefined __fastcall FUN_1800649ec(undefined8 param_1, uint * param_2, longlong * param_3, ulonglong param_4)
 * Address ranges: 1800649ec-180064ce1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800649ec(undefined8 param_1,uint *param_2,longlong *param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_res8;
  
  if ((param_4 >> 0x38 & 1) != 0) {
    local_res8 = param_1;
    uVar1 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
    local_res8 = CONCAT44(local_res8._4_4_,uVar1);
    uVar2 = FUN_1800ec8c0((longlong)param_2,4,'\0');
    local_res8 = CONCAT44(uVar2,(undefined4)local_res8);
    uVar3 = 0;
    do {
      FUN_1800edbe0(param_2,param_3,0x11,
                    (ulonglong)*(uint *)((longlong)&local_res8 + (ulonglong)(uVar3 >> 2) * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    FUN_1800edbe0(param_2,param_3,0x31,(ulonglong)uVar1);
    FUN_1800edbe0(param_2,param_3,0x31,(ulonglong)uVar2);
    FUN_1800edbe0(param_2,param_3,1,0x410000);
    FUN_1800edbe0(param_2,param_3,1,0x410001);
    FUN_1800edbe0(param_2,param_3,0x3c,0x410000);
    FUN_1800edbe0(param_2,param_3,0x3c,0x410000);
    FUN_1800edbe0(param_2,param_3,0x3c,0x410000);
    FUN_1800edbe0(param_2,param_3,0x4000d,0xffffffff);
  }
  return;
}

