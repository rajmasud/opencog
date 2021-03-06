; This rule simply inherits the linguistic concept of being definite to
; any definite noun such as "that man."
; (AN June 2015)

(define definite
	(BindLink
		(VariableList
			(var-decl "$a-parse" "ParseNode")
			(var-decl "$noun" "WordInstanceNode")
			(var-decl "$lemma" "WordNode")
		)
		(AndLink
			(word-in-parse "$noun" "$a-parse")
			(word-lemma "$noun" "$lemma")
			(InheritanceLink
				(VariableNode "$noun")
				(DefinedLinguisticConceptNode "definite")
			)
		)
		(ExecutionOutputLink
			(GroundedSchemaNode "scm: definite-rule")
			(ListLink
				(VariableNode "$lemma")
				(VariableNode "$noun"))
		)
	)
)
