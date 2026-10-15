/*
 * FUN_18015ac98 at 18015ac98
 * undefined FUN_18015ac98(void)
 * Address ranges: 18015ac98-18015ad1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18015ac98(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 0x10060) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10060) + 0x20) = 0;
  }
  *(longlong *)(param_1 + 0x10060) = param_2;
  uVar3 = 0x2a;
  if (param_3 == '\0') {
    uVar3 = 0x39;
  }
  *(undefined4 *)(param_1 + 0x100ec) = uVar3;
  *(undefined1 *)(param_1 + 0x10104) = 1;
  uVar1 = *(uint *)(param_1 + 0x10100) & 0x7fffffff;
  *(uint *)(param_1 + 0x10100) = uVar1;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x10100) =
         uVar1 | (uint)(*(char *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x40) +
                                   (ulonglong)*(uint *)(param_2 + 0x54) * 0x10) + 0x3c) != '\0') <<
                 0x1f;
    lVar2 = 0;
    if (param_1 != 0) {
      lVar2 = param_1 + 0xf6d0;
    }
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
  return;
}

