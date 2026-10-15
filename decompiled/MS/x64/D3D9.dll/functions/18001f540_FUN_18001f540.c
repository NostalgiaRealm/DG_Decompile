/*
 * FUN_18001f540 at 18001f540
 * undefined __fastcall FUN_18001f540(longlong param_1, longlong param_2, longlong param_3, undefined8 param_4, int param_5, uint param_6)
 * Address ranges: 18001f540-18001f664
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f540(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
                  ,uint param_6)

{
  int iVar1;
  longlong lVar2;
  longlong local_188 [2];
  longlong local_178;
  undefined *local_170;
  undefined *local_160;
  int local_158;
  int local_150;
  int local_148;
  int local_144;
  uint local_140;
  undefined1 local_13c;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_137;
  undefined1 local_136;
  undefined2 local_135;
  longlong local_120;
  
  iVar1 = *(int *)(param_3 + 4);
  FUN_1800fbea0((undefined1 *)local_188,0,0x88);
  local_158 = *(int *)(param_3 + 0xc);
  local_13c = 2;
  local_139 = 2;
  lVar2 = (ulonglong)(uint)(local_158 * param_5) + param_2;
  local_188[0] = lVar2 + (ulonglong)*(byte *)(param_3 + 0x17) * 4;
  local_170 = &DAT_1801012b0;
  if (*(char *)(param_3 + 0x8c) != -1) {
    local_170 = (undefined *)(lVar2 + (ulonglong)*(byte *)(param_3 + 0x8f) * 4);
    local_139 = *(undefined1 *)(param_3 + 0x90);
    local_150 = local_158;
  }
  local_160 = &DAT_1801012a8;
  if (*(char *)(param_3 + 0x24) != -1) {
    local_160 = (undefined *)(lVar2 + (ulonglong)*(byte *)(param_3 + 0x27) * 4);
    local_137 = *(undefined1 *)(param_3 + 0x28);
    local_148 = local_158;
  }
  if (*(char *)(param_3 + 0x1c) != -1) {
    local_178 = lVar2 + (ulonglong)*(byte *)(param_3 + 0x1f) * 4;
    local_140 = (uint)*(byte *)(param_3 + 0x1d);
    local_13a = *(undefined1 *)(param_3 + 0x20);
    local_144 = local_158;
  }
  local_120 = param_1 + 0x3d4;
  local_135 = 1;
  local_136 = iVar1 != 0;
  FUN_18002832c(param_1,local_188,0,param_6);
  return;
}

