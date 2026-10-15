/*
 * FUN_10060d7d at 10060d7d
 * undefined __stdcall FUN_10060d7d(int param_1, int * param_2)
 * Address ranges: 10060d7d-10060f3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060d7d(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_100c43de(param_2);
  }
  if (*(char *)(param_1 + 0x3d) != '\0') {
    FUN_100c43b1(param_2);
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0xf4) + 0x126d);
  if (cVar1 == '\x02') {
    uVar2 = 2;
    do {
      if (*(char *)((uVar2 - 2) + *(int *)(param_1 + 0xf4)) != '\0') {
        FUN_100c43b1(param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_100c43b1(param_2);
    }
    uVar2 = 5;
    do {
      if (*(char *)(uVar2 + 0x25 + *(int *)(param_1 + 0xf4)) != '\0') {
        FUN_100c43b1(param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xd);
  }
  else if (cVar1 == '\x03') {
    uVar2 = 2;
    do {
      if (*(char *)(param_1 + 0x3c + uVar2) != '\0') {
        FUN_100c43b1(param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xd);
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    FUN_100c3d50(param_2,4);
  }
  uVar2 = 0;
  do {
    if (*(char *)(uVar2 + 0x14b + *(int *)(param_1 + 0xf4)) != '\0') {
      FUN_100c440d(param_2);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (*(char *)(*(int *)(param_1 + 0xf4) + 0x330) != '\0') {
    FUN_100c3d50(param_2,2);
  }
  return;
}

