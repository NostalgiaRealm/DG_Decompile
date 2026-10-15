/*
 * FUN_1800a85b8 at 1800a85b8
 * uint __fastcall FUN_1800a85b8(longlong * param_1, uint * param_2, uint param_3, int param_4, byte param_5)
 * Address ranges: 1800a85b8-1800a88d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a85b8(longlong *param_1,uint *param_2,uint param_3,int param_4,byte param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar2 = *param_2 & 0xf;
  if (uVar2 == 5) {
    iVar5 = 1;
  }
  else {
    if (uVar2 != 6) {
      if (uVar2 != 7) {
        return 0;
      }
      uVar3 = FUN_1800a83bc(param_1,param_2,0,0,0,param_5);
      uVar2 = uVar3;
      if (((param_3 != 0) && (param_4 == 0)) && (uVar2 = param_3, param_3 != uVar3)) {
        FUN_1800ec960((longlong)(param_2 + 4),uVar3);
      }
      puVar1 = param_2 + 4;
      uVar4 = FUN_1800ec8c0((longlong)puVar1,3,'\0');
      FUN_1800edbe0(puVar1,param_1,0,(ulonglong)uVar4);
      FUN_1800edbe0(puVar1,param_1,0x2010,(ulonglong)uVar2);
      FUN_1800edbe0(puVar1,param_1,0x2010,(ulonglong)uVar2);
      uVar6 = (ulonglong)uVar2;
      FUN_1800edbe0(puVar1,param_1,0x2010,uVar6);
      if (param_4 != 0) {
        FUN_1800a4434(param_1,(longlong)param_2,uVar2,CONCAT71((int7)(uVar6 >> 8),7),uVar3,0,param_4
                     );
      }
      FUN_1800edbe0(puVar1,param_1,0x36,(ulonglong)uVar2);
      return uVar3;
    }
    iVar5 = 0;
  }
  uVar2 = FUN_1800a83bc(param_1,param_2,iVar5,param_3,param_4,param_5);
  return uVar2;
}

