/*
 * FUN_1001d1f8 at 1001d1f8
 * undefined4 __thiscall FUN_1001d1f8(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, undefined4 * param_8, char param_9, undefined4 param_10)
 * Address ranges: 1001d1f8-1001d317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1001d1f8(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,undefined4 *param_8,char param_9,undefined4 param_10)

{
  char cVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 uVar4;
  undefined1 uVar5;
  undefined4 *puVar7;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  int local_8;
  undefined1 uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = this;
  cVar1 = FUN_1001d0f4(this,1,param_1,param_4,0,param_9,(int)local_24,'\x01');
  uVar4 = extraout_var;
  if (cVar1 != '\0') {
    local_8 = param_2;
    iVar3 = param_3;
    uVar5 = uVar6;
    if ((local_18 == param_4) && (local_14 == 0)) {
      uVar2 = FUN_1001c05c(local_18,param_1 == 2);
      uVar2 = uVar2 >> 3;
      if (uVar2 != 0) {
        param_4 = local_1c;
        local_8 = param_5 + param_2;
        local_10 = local_1c;
        _param_9 = param_3 + param_6;
        if (param_7 < 0) {
          iVar3 = (*(int *)((int)local_c + 0x9c) - param_3) + -1;
          _param_9 = *(int *)((int)local_c + 0x9c) - iVar3;
          param_4 = -local_1c;
          param_3 = _param_9 - param_6;
        }
        puVar7 = (undefined4 *)(uVar2 * param_2 + local_1c * iVar3 + local_20);
        if (param_6 != 0) {
          do {
            FUN_100500b0(puVar7,param_8,uVar2 * param_5);
            param_8 = (undefined4 *)((int)param_8 + param_7);
            puVar7 = (undefined4 *)((int)puVar7 + param_4);
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
        iVar3 = _param_9;
        uVar5 = 1;
      }
    }
    FUN_1001d191(local_c,1,param_1,0,param_2,param_3,local_8,iVar3,param_10);
    uVar4 = extraout_var_00;
  }
  return CONCAT31(uVar4,uVar5);
}

