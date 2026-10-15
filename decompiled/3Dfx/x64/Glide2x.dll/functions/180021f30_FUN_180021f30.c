/*
 * FUN_180021f30 at 180021f30
 * char __fastcall FUN_180021f30(longlong * param_1, uint param_2, int param_3, DWORD param_4, int param_5, char param_6, longlong param_7, char param_8)
 * Address ranges: 180021f30-180022021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180021f30(longlong *param_1,uint param_2,int param_3,DWORD param_4,int param_5,char param_6
                  ,longlong param_7,char param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  cVar1 = '\0';
  uVar4 = 2;
  if (((param_2 != 0) && (param_4 != 0xff)) &&
     (iVar2 = FUN_1800208fc(param_4,param_3 == 2), iVar2 == 0)) {
    return '\0';
  }
  (**(code **)(*param_1 + 0x2b8))(param_1);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else if (param_3 == 1) {
    uVar4 = 1;
  }
  else if (param_3 != 2) goto LAB_180022006;
  lVar3 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],uVar4);
  if ((param_3 == *(int *)((longlong)param_1 + 0x2984)) || (*(char *)(lVar3 + 0x48) != '\0')) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  cVar1 = FUN_180021644((longlong)param_1,param_2,uVar4,param_4,param_5,param_6,param_7,param_8);
LAB_180022006:
  (**(code **)(*param_1 + 0x2c0))(param_1);
  return cVar1;
}

