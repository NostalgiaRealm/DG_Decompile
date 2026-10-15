/*
 * FUN_1001f304 at 1001f304
 * undefined4 __fastcall FUN_1001f304(undefined4 param_1, uint * param_2)
 * Address ranges: 1001f304-1001f555
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001f304(void *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_1c;
  int local_18;
  void *local_c;
  int local_8;
  
  local_c = param_1;
  FUN_100069a7(&local_1c,0x200);
  puVar1 = param_2 + 3;
  uVar4 = *puVar1;
  iVar2 = FUN_100576ba(uVar4);
  if ((iVar2 == 0x40) || (local_3c = 0x58454853, iVar2 == 0x41)) {
    local_3c = 0x52444853;
  }
  local_38 = 0;
  local_30 = 0;
  local_34 = uVar4;
  FUN_10057629(&local_1c,&local_3c,0x10);
  local_8 = local_18 - (int)local_1c;
  FUN_100069a7(&local_2c,0x80);
  FUN_1001f029((int *)&local_2c,param_2);
  FUN_100575ba((int *)puVar1,(int *)&local_2c,0x3e);
  FUN_1005796f(*puVar1,(int *)&local_1c);
  if ((param_2[5] & 1) != 0) {
    FUN_100579eb(*puVar1,(int *)&local_1c);
  }
  uVar4 = 0;
LAB_1001f3fb:
  do {
    if (*(char *)((int)param_2 + uVar4 + 0x73) != '\0') {
      if (uVar4 == 0) {
        FUN_10057663((int *)&local_1c,4);
        uVar4 = 1;
        goto LAB_1001f3fb;
      }
      FUN_10057663((int *)&local_1c,3);
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      uVar4 = 0;
      do {
        if (*(char *)((int)param_2 + uVar4 + 0x75) != '\0') {
          FUN_10057663((int *)&local_1c,3);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      uVar4 = 0;
      do {
        if ((1 << ((byte)uVar4 & 0x1f) & (param_2[8] | param_2[7])) != 0) {
          iVar2 = FUN_100576ba(*puVar1);
          if (((iVar2 == 0x40) || (iVar2 == 0x41)) || (iVar2 == 0x50)) {
            FUN_10057663((int *)&local_1c,3);
          }
          else if (iVar2 == 0x51) {
            FUN_1005790f((int *)&local_1c);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
      FUN_1001be8f((int *)&local_1c,(int)param_2);
      if (*(char *)((int)param_2 + 0x41) != '\0') {
        FUN_10057663((int *)&local_1c,2);
      }
      FUN_10057629(&local_1c,local_2c,local_28 - (int)local_2c);
      uVar4 = local_18 - (int)local_1c;
      local_1c[1] = uVar4 - 8;
      local_1c[3] = (uVar4 - local_8 >> 2) + 2;
      FUN_10057629(local_c,local_1c,uVar4);
      thunk_FUN_10060be1(local_2c);
      uVar3 = thunk_FUN_10060be1(local_1c);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  } while( true );
}

