/*
 * FUN_18006d298 at 18006d298
 * undefined __fastcall FUN_18006d298(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4, uint param_5, uint param_6, ulonglong param_7, int param_8, int param_9)
 * Address ranges: 18006d298-18006d69f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006d298(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4,uint param_5,
                  uint param_6,ulonglong param_7,int param_8,int param_9)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8;
  
  puVar3 = (uint *)(ulonglong)(param_4 * 3);
  uVar4 = 0;
  uVar6 = (param_7 & 0xffffffffffff) >> ((byte)(param_4 * 3) & 0x3f);
  uVar5 = (uint)uVar6 & 7;
  local_res8 = 0;
  if (((uVar5 - 5 < 2) && ((param_7 >> 0x32 & 1) != 0)) || (param_8 != 0)) {
    puVar3 = param_2;
    uVar2 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
    uVar4 = (ulonglong)uVar2;
  }
  if ((uVar6 & 7) != 0) {
    if (param_8 != 0) {
      FUN_1800edbe0(param_2,param_3,0xf,uVar4);
      puVar3 = param_2;
      FUN_1800edbe0(param_2,param_3,0xf,uVar4);
    }
    if ((param_7 >> 0x3e & 1) == 0) {
      local_res8 = param_5;
      if (param_8 != 0) {
        puVar3 = param_2;
        FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)param_6);
        local_res8 = 0;
      }
    }
    else {
      FUN_1800edbe0(param_2,param_3,0xe,(ulonglong)param_6);
      local_res8 = 0;
      puVar3 = param_2;
      FUN_1800edbe0(param_2,param_3,0x37,(ulonglong)param_6);
      if (param_8 != 0) {
        puVar3 = param_2;
        FUN_1800edbe0(param_2,param_3,0,(ulonglong)param_6);
      }
    }
    pbVar1 = (byte *)((longlong)param_2 + ((longlong)(int)param_4 >> 3) + 0xb4);
    *pbVar1 = *pbVar1 | '\x01' << (param_4 & 7);
  }
  FUN_180065668(puVar3,param_2,uVar5,param_4,param_6,(uint)uVar4,param_7,param_3,local_res8);
  if (((uVar6 & 7) != 0) && (param_9 != 0)) {
    FUN_1800edbe0(param_2,param_3,0x32,uVar4);
    FUN_1800edbe0(param_2,param_3,0x38,(ulonglong)param_6);
  }
  FUN_1800ec960((longlong)param_2,(uint)uVar4);
  return;
}

