/*
 * FUN_1008c748 at 1008c748
 * undefined1 __fastcall FUN_1008c748(undefined4 param_1, undefined1 param_2, uint param_3, int * param_4)
 * Address ranges: 1008c748-1008c903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1008c748(int param_1,undefined1 param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint local_e0;
  undefined1 local_dc;
  undefined4 local_db;
  undefined2 uStack_d7;
  undefined1 uStack_d5;
  int local_d4 [12];
  undefined1 *local_a4;
  undefined2 local_a0;
  int local_9c [7];
  undefined1 local_7d [57];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  
  local_e0 = param_3;
  local_db = 0;
  uVar4 = 0;
  uStack_d7 = 0;
  uStack_d5 = 0;
  local_dc = param_2;
  FUN_100cfed0(local_d4,0,0x8c);
  uVar1 = (undefined1)(local_e0 >> 10);
  local_db._0_2_ = (ushort)((byte)(local_e0 >> 7) & 1);
  local_db = CONCAT13(uVar1,CONCAT12(uVar1,(ushort)local_db)) & 0x101ffff;
  local_db = CONCAT22(local_db._2_2_,CONCAT11((char)(local_e0 >> 8),(undefined1)local_db)) &
             0xffff01ff;
  FUN_100cfed0(local_9c,0,0x54);
  FUN_100cfed0(local_d4,0,0x38);
  local_a4 = local_7d;
  local_a0 = 0x10;
  local_9c[3] = 0x110800;
  local_9c[2] = 0x210800;
  local_9c[1] = 0x310800;
  local_9c[0] = 0x410800;
  local_9c[4] = 0x110400;
  local_9c[5] = 0x410400;
  local_d4[0] = param_1;
  FUN_10089020(&local_e0);
  local_44 = 0x43425844;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 1;
  local_2c = 0;
  local_28 = 3;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_100c3d16(param_4,&local_44,0x2c);
  *(int *)(*param_4 + 0x20) = param_4[1] - *param_4;
  FUN_10036e19(&local_18,0x800);
  uVar2 = FUN_1008c51a(&local_18,&local_e0);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_100891bc(param_4,(int)&local_e0);
    if ((char)uVar2 != '\0') {
      *(int *)(*param_4 + 0x24) = param_4[1] - *param_4;
      iVar3 = FUN_100892ac(param_4,(int)&local_e0);
      if (iVar3 != 0) {
        *(int *)(*param_4 + 0x28) = param_4[1] - *param_4;
        FUN_100c3d16(param_4,local_18,local_14 - (int)local_18);
        FUN_100c3dfb(param_4);
        uVar4 = 1;
      }
    }
  }
  thunk_FUN_100cfd6c(local_18);
  return uVar4;
}

