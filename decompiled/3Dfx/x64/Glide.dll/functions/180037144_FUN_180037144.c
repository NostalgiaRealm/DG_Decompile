/*
 * FUN_180037144 at 180037144
 * undefined8 __fastcall FUN_180037144(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined8 * param_5, undefined8 * param_6, undefined8 * param_7, undefined8 * param_8, undefined8 * param_9, undefined8 param_10)
 * Address ranges: 180037144-180037340
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180037144(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                       undefined8 *param_8,undefined8 *param_9,undefined8 param_10)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  byte extraout_var;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98 [6];
  int local_80 [7];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  
  cVar1 = *(char *)(param_1 + 0x48);
  local_a8 = 0x28;
  local_c0 = 1;
  local_bc = 1;
  iVar7 = (-(uint)(cVar1 != '\0') & 0x1d) + 0x1c;
  local_b0 = 0;
  local_b8 = (-(uint)(cVar1 != '\0') & 0x1a) + 0x1b;
  local_a0 = 0;
  local_c8 = param_2;
  local_c4 = param_3;
  local_b4 = param_4;
  uVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 200),&local_c8,0,param_5);
  if (-1 < (int)uVar4) {
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[1] = 6;
    local_98[2] = 0;
    local_98[0] = iVar7;
    iVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x48))
                      ((longlong *)**(undefined8 **)(param_1 + 200),*param_5,local_98,param_7);
    if (-1 < iVar3) {
      plVar2 = (longlong *)*param_7;
      *param_6 = plVar2;
      (**(code **)(*plVar2 + 8))();
      if (param_4 == 1) {
        plVar2 = (longlong *)*param_5;
        bVar6 = 1;
        *param_8 = plVar2;
        (**(code **)(*plVar2 + 8))();
      }
      else {
        local_b4 = 1;
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                  ((longlong *)**(undefined8 **)(param_1 + 200),&local_c8,0,param_8);
        bVar6 = extraout_var >> 7 ^ 1;
      }
      if (bVar6 != 0) {
        local_80[4] = 0;
        local_80[5] = 0;
        local_80[1] = 4;
        local_80[2] = 0;
        local_80[3] = 0xffffffff;
        local_80[0] = (-(uint)(cVar1 != '\0') & 0x1b) + 0x1e;
        iVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x38))
                          ((longlong *)**(undefined8 **)(param_1 + 200),*param_8,local_80,param_9);
        if (-1 < iVar3) {
          local_58 = 0;
          local_64 = 4;
          local_5c = 0xffffffff;
          local_80[6] = iVar7;
          uVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x38))
                            ((longlong *)**(undefined8 **)(param_1 + 200),*param_8,local_80 + 6,
                             param_10);
          if (-1 < (int)uVar5) {
            return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          }
          (**(code **)(*(longlong *)*param_9 + 0x10))();
        }
        (**(code **)(*(longlong *)*param_8 + 0x10))();
      }
      (**(code **)(*(longlong *)*param_7 + 0x10))();
      (**(code **)(*(longlong *)*param_6 + 0x10))();
    }
    uVar4 = (**(code **)(*(longlong *)*param_5 + 0x10))();
  }
  return uVar4 & 0xffffffffffffff00;
}

