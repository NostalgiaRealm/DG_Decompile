/*
 * FUN_10012ba8 at 10012ba8
 * undefined FUN_10012ba8(void)
 * Address ranges: 10012ba8-10012d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012ba8(int *param_1,int param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char acStack_2a4 [4];
  undefined8 local_2a0;
  undefined8 uStack_298;
  uint local_290 [6];
  undefined2 local_278;
  undefined4 local_254;
  undefined2 local_250;
  undefined2 local_24c;
  undefined1 local_24a;
  undefined1 local_249;
  undefined2 local_248;
  char acStack_244 [456];
  char local_7c [76];
  
  uVar2 = *param_4;
  *(undefined8 *)(*param_1 + param_2 * 0x260) = param_3;
  *(uint *)(*param_1 + param_2 * 0x260 + 8) = uVar2;
  FUN_100a2d78(local_290);
  local_290[5] = 0x100400;
  local_278 = 3;
  local_290[0] = uVar2;
  local_290[3] = 0x10;
  local_290[4] = 1;
  local_290[1] = 0;
  local_290[2] = 1;
  local_7c[0] = '\0';
  if ((uVar2 >> 1 & 1) != 0) {
    local_250 = 4;
    local_254 = 0x4040400;
    local_7c[1] = 5;
    local_290[2] = 2;
    local_290[3] = 0x14;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    local_24a = 4;
    local_24c = 0x400;
    local_248 = 4;
    local_249 = (char)(local_290[3] >> 2);
    local_7c[local_290[2]] = '\x06';
    local_290[2] = local_290[2] + 1;
    local_290[3] = local_290[3] + 4;
  }
  uVar5 = 0;
  iVar4 = 0;
  do {
    if ((8 << (ulonglong)(uVar5 & 0x1f) & uVar2) != 0) {
      local_2a0 = 0x100000000;
      uStack_298 = 0x300000002;
      acStack_244[iVar4] = '\0';
      iVar1 = (uVar2 >> (ulonglong)((uVar5 + 9) * 2 & 0x1f) & 3) + 1;
      cVar3 = (char)iVar1;
      acStack_244[iVar4 + 1] = cVar3;
      acStack_244[iVar4 + 2] = cVar3 * '\x04';
      acStack_244[iVar4 + 3] = (char)(local_290[3] >> 2);
      acStack_244[iVar4 + 4] = acStack_2a4[iVar1 * 4];
      acStack_244[iVar4 + 5] = '\0';
      local_7c[local_290[2]] = (char)uVar5 + '\a';
      local_290[2] = local_290[2] + 1;
      local_290[3] = (byte)acStack_244[iVar4 + 2] + local_290[3];
    }
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 8;
  } while (uVar5 < 8);
  FUN_101325a0(*param_1 + param_2 * 0x260 + 0xc,local_290,0x254);
  return;
}

