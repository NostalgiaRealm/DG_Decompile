/*
 * FUN_10035798 at 10035798
 * undefined4 __thiscall FUN_10035798(void * this, int param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint param_6, uint param_7)
 * Address ranges: 10035798-1003591a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10035798(void *this,int param_1,undefined4 param_2,uint param_3,int *param_4,undefined4 *param_5
            ,uint param_6,uint param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_320 [12];
  undefined1 *local_2f0;
  undefined2 local_2ec;
  undefined4 local_2e8;
  int local_2e4 [25];
  undefined1 local_280 [588];
  LPVOID local_34 [4];
  int local_24;
  undefined4 *local_20;
  int local_1c;
  
  FUN_1005c9cc(local_2e4,0,0x2a4);
  local_2e8 = 0;
  FUN_1005c9cc((int *)local_320,0,0x38);
  local_320[0] = param_3;
  local_2f0 = local_280;
  local_2ec = 0x40;
  FUN_10030954((int)local_320);
  FUN_100320e5(param_1,(uint)local_320);
  FUN_100325bb((int)local_320,param_6,param_7);
  uVar2 = FUN_10030eae(param_4,(int)local_320);
  if ((char)uVar2 != '\0') {
    FUN_10019cac(&local_20,0x200);
    local_24 = FUN_10057e43((int *)&local_20,param_3);
    FUN_10019cac(local_34,0x80);
    uVar3 = FUN_100353d2(this,param_1,local_320,(int *)&local_20,(int *)local_34,param_6,param_7);
    if ((char)uVar3 != '\0') {
      FUN_10057e94((int *)&local_20,(int *)local_34,local_24);
      FUN_10057cf9(param_4,local_20,local_1c - (int)local_20);
      if (*(int *)((int)this + 8) != 0) {
        pbVar1 = (byte *)(((uint)(param_4[1] - *param_4) >> 1) + *param_4);
        *pbVar1 = *pbVar1 ^ 0x2a;
      }
      FUN_10057dde(param_4);
      FUN_100319d9((int)local_320,param_5);
      thunk_FUN_1005c76c(local_34[0]);
      uVar3 = thunk_FUN_1005c76c(local_20);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    thunk_FUN_1005c76c(local_34[0]);
    uVar2 = thunk_FUN_1005c76c(local_20);
  }
  return uVar2 & 0xffffff00;
}

