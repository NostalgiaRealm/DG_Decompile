/*
 * FUN_10011754 at 10011754
 * undefined4 __thiscall FUN_10011754(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 * param_7)
 * Address ranges: 10011754-10011804
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10011754(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  char cVar1;
  undefined3 extraout_var;
  uint uVar2;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_18 = 0;
  uVar4 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = this;
  cVar1 = FUN_100113ce(this,0,param_1,0,0,'\0',(int)local_1c,'\x01');
  uVar3 = extraout_var;
  if (cVar1 != '\0') {
    uVar2 = FUN_1000fe52(local_10,param_1 == 7 || param_1 == 2);
    uVar2 = uVar2 >> 3;
    if (uVar2 != 0) {
      if ((local_c == 0) &&
         (puVar5 = (undefined4 *)(uVar2 * param_2 + local_14 * param_3 + local_18), this = local_8,
         param_5 != 0)) {
        do {
          FUN_10052930(param_7,puVar5,uVar2 * param_4);
          puVar5 = (undefined4 *)((int)puVar5 + local_14);
          param_7 = (undefined4 *)((int)param_7 + param_6);
          param_5 = param_5 + -1;
          this = local_8;
        } while (param_5 != 0);
      }
      uVar4 = 1;
    }
    FUN_10011535(this,0,param_1,0,0,0,0,0,0);
    uVar3 = extraout_var_00;
  }
  return CONCAT31(uVar3,uVar4);
}

