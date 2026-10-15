/*
 * FUN_180026a10 at 180026a10
 * undefined FUN_180026a10(void)
 * Address ranges: 180026a10-180026a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180026a10(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 local_20;
  uint local_18 [6];
  
  local_20 = 0;
  local_18[0] = param_2 + 0xfU & 0xfffffff0;
  local_18[1] = 2;
  local_18[2] = 4;
  local_18[3] = 0x10000;
  local_18[4] = 0;
  local_18[5] = local_18[0];
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),local_18,0,&local_20);
  if (iVar1 < 0) {
    local_20 = 0;
  }
  return local_20;
}

